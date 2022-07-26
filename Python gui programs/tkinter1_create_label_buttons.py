from tkinter import *
root=Tk()
x=Label(root,text="i m kash")
x.pack()
fm=Frame(root)
fm.pack(fill=BOTH)
Button(fm,text="button1",fg="red").pack()
Button(fm,text="button2",fg="blue").pack(side=LEFT)
Button(fm,text="button3",fg="green").pack(side=RIGHT)

root.mainloop()