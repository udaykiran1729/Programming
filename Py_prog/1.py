from operator import truediv
from pickle import TRUE
from re import M
import string
from math import pow

#s=input()
def cond1(s):
        for i in s:
            if ord(i) in range(65,90):
                return True
            elif ord(i) in range(97,123):
                return True
            elif i=='+' or i=='/':
                return True
            else:
                return False
def  cond2(s):#conversion into 8-bit
    m=''
    for i in s:
        n=bin(ord(i))
        n=n[2:]
        if len(n)<8:
            n='0'*(8-len(n))+n
        m=m+n
    return m

def cond3(s):#conversion into characers
    n=0
    for i in s:
        n=n+(int(i)*pow(2,i))
    l=list(string.ascii_letters)
    if n>=65 and n<=90:
        n=n-65
        return l[n]
    elif n in range(97,123):
        n=n-97
        return l[n]
    elif n== 62:
        return '+'
    else:
        return '/'
s=input()
if cond1:
    n=cond2(s)
    s1=''
    for i in range(0,len(n),6):
        s1+=cond3(str(n)[i:i+6])
    print(s1)
else:
    print('not possible')