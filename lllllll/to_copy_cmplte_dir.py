import os
import shutil
import glob

src="C:\\Users\\hp\\Desktop\\lllllll"
dst="C:\\Users\\hp\\Desktop\\test\\lllllll"
shutil.copytree(src,dst)

os.chdir("C:\\Users\\hp\\Desktop\\test\\lllllll")
files=glob.glob("*.py")
for filename in files:
 os.unlink(filename)
n=input()