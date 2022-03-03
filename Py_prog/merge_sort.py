def merge(l1,l2):
        t1,t2=0,0
        (c,m,n)=([],len(l1),len(l2))
        #t1,t2=0,0
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
        
        #for sorted lists
        print('#',c,'#')
        #for sorted lists
        
        return c

def mergesort(a,left,right):
    if right-left<=1:
        return a[left:right]
    if right- left>1:
        mid=(left+right)//2

        #for sublists
        print(a[left:mid],a[mid:right])
        #for sublists

        l=mergesort(a,left,mid)
        r=mergesort(a,mid,right)
        
        return merge(l,r)

# m=int(input('enter the length of first list:'))
#n=int(input('enter the length of second list:'))

# l1=[int(input('enter the element-a:')) for x in range(m)]
# l1.sort()
l1 = [76,90,21,45,56,9]

print(l1)
l=mergesort(l1,0,len(l1))
print(l)