import os
fo=open("abc.txt","rb")
content=fo.read()
os.chdir("C:\\Users\\hp\\Desktop")
os.mkdir("test")
os.chdir("C:\\Users\\hp\\Desktop\\test")
fi=open("xyz.txt","wb")
fi.write(content)
fo.close()
fi.close()


n=input()
