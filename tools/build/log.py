from enum import IntEnum
import os
import datetime

logfd = None
class Log(IntEnum):
    ERROR = 1
    WARN  = 2
    PRINT = 3
    DEBUG = 4
    VERBOSE = 5
    def __call__(level, message, elevated=False):
        colour = ["\033[91m", "\033[93m", "\033[96m", "\033[95m", "\033[2m"]
        clear = '\033[0m'
        timestamp = datetime.datetime.now().strftime("<%H:%M:%S> ")
        if level <= DEFAULTLEVEL:
            if elevated:
                global logfd
                if logfd is None:
                    if os.path.exists("./linklog.txt"): os.unlink("./linklog.txt")
                    logfd = open("./linklog.txt", "w")
                logfd.write(colour[level-1] + timestamp + str(message) + clear + "\n")
            else:
                print(colour[level-1] + timestamp + str(message) + clear)
    def printElevated():
        if os.path.exists("./linklog.txt"):
            global logfd
            if logfd is None:
                logfd = open("./linklog.txt", "r")
                print(logfd.read())
            logfd.close()
            os.unlink("./linklog.txt")


DEFAULTLEVEL = Log.DEBUG