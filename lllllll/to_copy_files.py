import os
import shutil
os.chdir("C:\\Users\\hp\\Desktop")
os.mkdir("test")

source=os.listdir("C:\\Users\\hp\\Desktop\\lllllll")

dest="C:\\Users\\hp\\Desktop\\test"

os.chdir("C:\\Users\\hp\\Desktop\\lllllll")

for files in source:
 if files.endswith(".txt"):
   shutil.copy(files,dest)




n=input()
