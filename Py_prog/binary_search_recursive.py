def bin(l,n,mid,e):
    #print('the elements to be searched')
    #e=int(input())
    if (l[mid]>e and mid>=1):
         bin(l,n,mid//2,e)
    elif (l[mid]==e):
         print('the element found at',mid)
    elif l[mid]<e and mid<n:
         bin(l,n,mid+mid//2,e)
    #elif mid==1 and l[mid]==e:
    #     print('the element is at',mid)
    else:
         print("the element not found")
    
n=int(input("enter the no of elements :"))
l=[int(input("enter the element:")) for x in range(n)]
e=int(input('enter the element to be searched:'))
bin(l,n,n//2,e)