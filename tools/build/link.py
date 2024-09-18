import os
import sys
import json
from subprocess import run
from log import Log

if not sys.executable.endswith("link.exe"):
    import elevate
    elevate.elevate()

with open("./links.json", "r") as fd:
    tolink: list[list[str]] = json.load(fd)

def link(src: str, dest: str):
    run(
        [    "powershell"
        ,   f"New-item -ItemType SymbolicLink -Path {dest} -Target {src} -Force"
        ])


try:
    for src, dst in tolink:
        src = os.path.abspath(src)
        dst = os.path.abspath(dst)
        dstparent = os.path.split(dst)[0]
        if not os.path.exists(dstparent):
            Log.DEBUG(f"Creating {dstparent!r}", elevated=True)
            os.makedirs(dstparent)
        if os.path.exists(dst):
            if os.path.islink(dst):
                Log.DEBUG(f"{dst!r} is already linked to {os.readlink(dst)!r}", elevated=True)
            else:
                Log.DEBUG(f"{dst!r} already exists but is not a link", elevated=True)
        Log.PRINT(f"Making Symlink: {src}>{dst}", elevated=True)
        os.symlink(src, dst)
        #link(src, dst)
        if not os.path.exists(dst):
            Log.ERROR(f"Failed to make {src} > {dst}", elevated=True)
    os.unlink("./links.json")
except:
    import traceback
    Log.ERROR(traceback.format_exc(), elevated=True)