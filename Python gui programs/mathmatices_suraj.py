def sum():
 p=[]
 k=-1
 p=p+d.split()
 for i in p:
  k= k+1
  if i == "sum":
   if k>0:
    s1 = p[k-1]
    s2 = p[k+1]
    try:
     if (int(float(s1))==float(s1)) and (int(float(s2))==float(s2)):# f="2.0" int(f) get an error
      sum1 = int(float(s1))+int(float(s2))
      print(sum1)
     if int(float(s1))<float(s1) and int(float(s2))==(float(s2)):#hello
      sum2 = float(s1) + float(s2)
      print(sum2)
     if (int(float(s1))<float(s1)) and int(float(s2))<(float(s2)):
      sum2 = float(s1) + float(s2)
      print(sum2)
     if int(float(s1))==(float(s1)) and int(float(s2))<(float(s2)):
      sum2 = float(s1) + float(s2)
      print(sum2)
    except:
     pass
   if k<=0:
    print("[-] no initial value are defind for addition")
def sub():
 p=[]
 k=-1
 p=p+d.split()
 for i in p:
  k= k+1
  if i == "sub":
   if k>0:
    s1 = p[k-1]
    s2 = p[k+1]
    try:
     if (int(float(s1))==float(s1)) and (int(float(s2))==float(s2)):# f="2.0" int(f) get an error
      sub1 = int(float(s1))-int(float(s2))
      print(sub1)
     if int(float(s1))<float(s1) and int(float(s2))==(float(s2)):#hello
      sub2 = float(s1) - float(s2)
      print(sub2)
     if (int(float(s1))<float(s1)) and int(float(s2))<(float(s2)):
      sub2 = float(s1) - float(s2)
      print(sub2)
     if int(float(s1))==(float(s1)) and int(float(s2))<(float(s2)):
      sub2 = float(s1) - float(s2)
      print(sub2)
    except:
     pass
   if k<=0:
    print("[-] no initial value are defind for substraction")
while True:
 d = input("==> ")
 p=[]
 p=p+d.split()
 if "sum" in p:
  sum()
 if "sub" in p:
  sub()
 
 
 
 
 
 