from tkinter import *
import tkinter.messagebox
import tkinter.simpledialog
root=Tk()

w=Label(root,text="My program")
w.pack()
tkinter.messagebox.showinfo("Welcome","Add ur msg here")
name=tkinter.simpledialog.askstring("Name","ur name  ???")
age=tkinter.simpledialog.askfloat("Age","ur age  ???")

output="hello......%s......"%(name)
output+="\n %f is ur age"%(age)

tkinter.messagebox.showinfo("RESULT",output)




root.mainloop()