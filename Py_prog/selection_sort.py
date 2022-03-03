#from zmq import SWAP

n=int(input('enter the length:'))
#l=list(range(500,1,-1))
l=[int(input("enter the list:")) for x in range(n)]
c=0
for i in range(len(l)):
    min=i
    for j in range(i,len(l)):
        if l[min]>l[j]:
            min=j
    c+=1
    l[i],l[min]=l[min],l[i]
        #c+=1
print(l)
print('no of interations:',c)