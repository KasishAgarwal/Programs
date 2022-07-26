a=int(input("Enter a no."))
b=int(input("Enter a no."))
c=int(input("Enter a no."))

if (a-(a%10))==0:
	if b%2==0:
		if c%2!=0:
			print("Sum is ",a+b+c)
		else:
			print("Third no. not odd")
	else:
		print("Second no. not even")
else:
	print("First is not a single digit no.")