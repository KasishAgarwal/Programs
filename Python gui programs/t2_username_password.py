from tkinter import *
root=Tk()
root.title("kash")
label_1=Label(root,text="Username",bg="black",fg="white",font="none 12 bold")
label_2=Label(root,text="Password")
label_1.grid(row=0)
label_2.grid(row=1)
entry_1=Entry(root)
entry_2=Entry(root)
entry_1.grid(row=0,column=1)
entry_2.grid(row=1,column=1)
root.mainloop()

