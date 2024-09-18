
import configparser
from log import Log
import os
import glob
import json
import pathlib
from mdl.bhi.modlist import ArmaModList
from mdl.bhi.pbo import pboReader
from mdl.config import getSteamLibrary


def unpack(config: configparser.ConfigParser):

    #read modlist
    try:
        arma = getSteamLibrary()["Arma 3"]
        Log.PRINT("Arma 3 Found")
    except KeyError:
        raise FileNotFoundError("\033[91mArma Install not found D:\033[0m")
    try:
        mods = ArmaModList.from_url(config["Unpack"]["Modlist"])
        Log.PRINT(f"Modlist Loaded: {mods}")
        Log.DEBUG([mod for mod in mods])
    except:
        raise FileNotFoundError("\033[91mModlist Import Failure.\033[0m")

    unpackDB = []
    def unpackPBO(pbopath:str):
        pbo = pboReader(open(pbopath, "rb"))
        path = os.path.join("P:\\", pbo.getPrefix())
        Log.PRINT(path)
        for file in pbo.entries:
            fpath = os.path.join(path, file['filename'])
            assert fpath.startswith(path)
            Log.VERBOSE(fpath)
            unpackDB.append([pbopath, os.stat(pbopath).st_mtime, fpath])
            os.makedirs(os.path.split(fpath)[0], exist_ok=True)
            open(fpath, "w").close()

    pbos = []
    if config["Unpack"]["UnpackA3"].lower() == 'true':
        Log.PRINT("Checking for A3 Updates...")
        pbos = (   glob.glob(os.path.join(arma.getInstalledDirectory(),"*/Addons/*.pbo"))
               +   glob.glob(os.path.join(arma.getInstalledDirectory(),"*/*.pbo"))
               )
        
    Log.PRINT("Checking for Mod Updates...")
    for mod in mods:
        pbos.extend(glob.glob(os.path.join(arma.getWorkshopItemDirectory(mod.workshopID), "addons\\*.pbo")))

    if os.path.exists("./unpack.json"):
        with open("./unpack.json") as fd: oldunpackDB: list[list[str,float,str]] = json.load(fd)
        oldpbos: dict[str, float] = {}
        newpbos: dict[str, float] = {pbo: os.stat(pbo).st_mtime for pbo in pbos}
        for entry in oldunpackDB:
            oldpbos[entry[0]] = entry[1]
        for oname, omtime in oldpbos.items():
            if (oname not in pbos) or (newpbos.get(oname, 0) > omtime):
                # pbo oname has been removed or updated, remove all of the files it had
                Log.PRINT(f"pbo {oname} has been removed or updated")
                for entry in oldunpackDB:
                    if entry[0] == oname:
                        if not os.path.exists(entry[2]): continue
                        os.unlink(entry[2]) # i think
                        p = pathlib.Path(entry[2]).parent
                        while True:
                            if len(os.listdir(str(p))) == 0 and not p.is_mount():
                                p.rmdir()
                                p = p.parent
                            else:
                                break
            else:
                # pbo is in both old and new and hasnt been updated, we want to not unpack it this time
                Log.DEBUG(f"pbo {oname} has not changed")
                pbos = [pbo for pbo in pbos if pbo != oname]
                #but we do want its entries in the updated db
                unpackDB.extend([entry for entry in oldunpackDB if entry[0] == oname])

    Log.PRINT(f"{len(pbos)} Updates Found.{' Updating...' if len(pbos) > 0 else ''}")

    # now unpack any pbo we havent removed from the list
    for pbo in pbos:
        unpackPBO(pbo)

    # and save the updated db
    with open("./unpack.json", "w") as fd:
        Log.DEBUG("Saving JSON")
        json.dump(unpackDB, fd)
