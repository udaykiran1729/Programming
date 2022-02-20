n=int(input('enter the length:'))
l=[int(input()) for x in range(n)]
c=0
for i in range(n):
    t=i
    while t>0 and l[t]>l[t-1]:
        l[t],l[t-1]=l[t-1],l[t]
        t-=1
        c+=1

print(l)
print('no of iterations:',c)