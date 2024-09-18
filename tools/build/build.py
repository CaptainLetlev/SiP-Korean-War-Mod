###Hob Build V2

import os
import sys
import git
import json
import shutil
import winreg
import msvcrt
import pathlib
import argparse
import configparser
from log import Log
from unpack import unpack
from subprocess import run, call
from dataclasses import dataclass

@dataclass
class pboStatusEntry:
    name: str
    retcode: int

def main():
    global config

    parser = argparse.ArgumentParser()
    parser.add_argument("-fullbuild", action="store_true", default=False, help="Build everything instead of only changed mods")
    parser.add_argument("-only", action="store", required=False, default=None, help="Only build the specified mod")
    parser.add_argument("-disableerrors", action="store_true", default=False, help="disables warnings are errors for the new aux mod, DO NOT USE")
    args = parser.parse_args()

    #Load Config
    config = configparser.ConfigParser(allow_no_value=True)
    if os.path.exists("./config.ini"):
        with open("./config.ini") as fd:
            config.read_file(fd)
            import log
            log.DEFAULTLEVEL = Log(int(config["Default"]["LogLevel"]))
            Log.DEBUG("Config File Loaded: " + repr({section: dict(config[section]) for section in config.sections()}))
    else:
        raise FileNotFoundError("Config file not found.")

    #Unpack Mods
    if config["Unpack"]["Unpack"].lower() == "true":
        Log.PRINT("Unpacking Mods")
        unpack(config)

    #Symlinks
    links = []
    for addon, ppath in (list(config["OldAddons"].items()) + list(config["NewAddons"].items())):
        if not os.path.islink(os.path.abspath(ppath)):
            links.append([os.path.abspath(addon), os.path.abspath(ppath)])
            Log.DEBUG(f"Linking: {os.path.abspath(addon)} : {os.path.abspath(ppath)}")
    if len(links) > 0:
        with open("./links.json", "w") as fd: json.dump(links, fd)
        run([sys.executable, "./link.py"])
        Log.printElevated()
        

    #Building Mods
    if config["Build"]["Build"].lower() == "true":
        #find PboProject
        try:
            pboProjectPath = winreg.QueryValueEx(winreg.OpenKeyEx(winreg.HKEY_CURRENT_USER, r"Software\Mikero\pboProject"), "exe")[0]
            Log.DEBUG("pboProject Found")
        except:
            raise FileNotFoundError("\033[91mPBOProject not found D:\033[0m")
        
        #Clear Temp
        if config["Build"]["ClearTemp"].lower() == "true":
            if os.path.exists("P://temp"): Log.PRINT("Clearing Temp"); shutil.rmtree("P:\\temp")

        #Load Git
        repo = git.Repo(os.path.abspath(config.items("GitRepo")[0][0]))
        def pboModified(path):
            abspath = os.path.normpath(os.path.abspath(path))
            plpath = pathlib.Path(abspath).resolve()
            Log.DEBUG(f"pboModified: {abspath}")
            return any \
                (   plpath in pathlib.Path(os.path.join(repo.working_tree_dir, gitpath)).resolve().parents
                    for gitpath in list(set([d.a_path for d in repo.index.diff(None)]) | set(repo.untracked_files))
                )

        #Build PBO's
        def buildPBO(src: str, name: str, new: bool = False):
            nonlocal args
            key = os.path.abspath(config["Build"]["Key"]) 
            if config["Build"]["FullBuild"].lower() == "true" \
            or args.fullbuild \
            or args.only \
            or pboModified(pbo) \
            or not os.path.exists(os.path.join(output, "addons", name + ".pbo")):
                Log.PRINT(f"Building {name}")
                Log.DEBUG(f"src {src} > dest {output}")
                pboargs = [   pboProjectPath
                ,   "-M=" + output
                ,   src#"P:\\RD501_Vehicles"
                ,   "+C"
                ,   "+W" if (new and not args.disableerrors) else "-W"
                ,   "+S"
                ,   "-P"
                ,   f"+Key={key}" if os.path.isfile(key) else "-K"
                ]
                Log.DEBUG(pboargs)
                retcode = call(pboargs)
                lst = []
                while msvcrt.kbhit(): lst.append(msvcrt.getwch())
                Log.DEBUG(f"Capturing PBOProject random characters: {lst}")
                Log.DEBUG(f"Retcode: {retcode}")
                pboStatus.append(pboStatusEntry(f"SiP/{name}" if new else name, retcode))
            else:
                Log.DEBUG(f"Skipping already built and unmodified {name}")

        pboStatus: list[pboStatusEntry] = []
        output = os.path.abspath(config.items("Output")[0][0])
        for pbo in config["OldAddons"].keys():
            src = os.path.abspath(config["OldAddons"][pbo])
            name = os.path.split(src)[1]
            if args.only is None or name.lower() == args.only.lower():
                buildPBO(src, name)

        for pbo in config["NewAddons"].keys():
            src = os.path.abspath(config["NewAddons"][pbo])
            name = os.path.split(src)[1]
            if args.only is None or name.lower() == args.only.lower():
                buildPBO(src, name, True)

        for status in pboStatus:
            if status.retcode == 0:
                Log.PRINT(f"Built {status.name}")
            else:
                Log.ERROR(f"Failed to build {status.name}")

if __name__ == '__main__':
    main()
    
    