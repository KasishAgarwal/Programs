from tkinter import *

master = Tk()

variable = StringVar(master)
variable.set("love") # default value

w = OptionMenu(master, variable, "ek", "behtar", "insani","zindagi")
w.pack()

mainloop()

