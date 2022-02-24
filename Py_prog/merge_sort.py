c=[]

m=int(input('enter the length of first list:'))
n=int(input('enter the length of second list:'))

l1=[int(input('enter the element-a:')) for x in range(m)]
l1.+()

l2=[int(input('enter the element-b:')) for x in range(n)]
l2.sort()

t1,t2=0,0
while t1+t2<m+n:
    if t1==m:
        c.append(l2[t2])
        t2+=1
    elif t2==n:
        c.append(l1[t1])
        t1+=1
    elif l1[t1]>l2[t2]:
        c.append(l2[t2])
        t2+=1
    elif l1[t1]<l2[t2]:
        c.append(l1[t1])
        t1+=1
print(c)