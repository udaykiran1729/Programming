#from zmq import SWAP


n=int(input('enter the length:'))
#l=list(range(500,1,-1))
l=[int(input()) for x in range(n)]
c=0
for i in range(len(l)):
    for j in range(i,len(l)):
        if l[j]>l[i]:
            l[i],l[j]=l[j],l[i]
        c+=1
print(l)
print('no of interations:',c)