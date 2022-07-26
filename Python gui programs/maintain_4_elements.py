list=[]
for i in  range(0,4):
	x=input("enter element in list:     ")
	list.append(x)
print("list is :    ",list)
print("what to enter more  ???  (y/n)")
ans=input()
if(ans is "y"):
	del list[0]
	x=input("enter element in list:     ")
	list.append(x)
print("new list is :    ",list)
xx=input("")