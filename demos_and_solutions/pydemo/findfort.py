import os
import re

files = os.listdir()
for f in files:
    if re.search("F90$",f):
        print("<<{}>> is a fortran file".format(f))
        with open(f,"r") as ffile:
            for line in ffile:
                line = line.strip()
                if re.......

for current,files,directories in os.walk("."):
    # analyze files & directories at this level
