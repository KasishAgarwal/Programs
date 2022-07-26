import os
import shutil
os.chdir("C:\\Users\\hp\\Desktop")
a=os.listdir("C:\\Users\\hp\\Desktop\\lllllll")
print(a)
fi=open("xyz.txt","w")
fi.write("0")
fi.close()
def directory(a):
		for file in a:
			if file.endswith("*.txt") is False:
				fi=open("xyz.txt","r")
				y=int(fi.read())+1
				fi.close()
				print(file)
				fo=open("xyz.txt","w")
				fo.write(str(y))
				fo.close()
			if file.endswith("*.txt") is True:
				os.chdir(os.getcwd()+"\\"+file)
				a=os.listdir(file)
				directory(a)

directory(a)
				
				
				
a=input()