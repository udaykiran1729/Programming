n=int(input("enter the legth of the list:"))
l=[int(input()) for x in range(n)]

print('the elements in the list are:')
for i in l:
    print(i,end=' ')

e=int(input("enter the element to be searched:"))
mid=n//2
c=0
temp=n
#while(l[mid]!=e):
while(temp!=1):
    if l[mid]>e:
        mid=mid//2
    elif l[mid]==e:
        print("the element fount at ",mid)
        break
    else:
        mid+=mid//2
    temp//=2
    c+=1

if temp==1 and l[mid]!=e:
    print('the element not found')
#print("the element has found at ",mid)

print("no of iterations are:",c)