#from tkinter import *
import tkinter
from tkinter import *
from typing import Text
window=tkinter.Tk()
window.geometry("450x300")
window.title("uday")
label=tkinter.Label(window,text="hello uday welcome to tkinter",font="bold").pack()
txt=tkinter.Entry(window,width=0)
txt.grid(column=1,row=0)
def click():
    res="welcome to"+txt.get()
    l1.configure(text=res)
t=tkinter.Button(window,text="enter",command=clicked)
##f#or i in range(1,10):
 #   bt=tkinter.Button(window,text=i)
 #   bt.grid(column=i,row=0)
window.mainloop()