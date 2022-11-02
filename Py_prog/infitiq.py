# import numpy as np

# import matplotlib.pyplot as plt

# a=np.array([1,2,3])
# b=np.array([4,5,6])

# plt.plot(a,b,marker='.')
# plt.show()


def merge(a,l,m,h):
    l1=a[l:m]
    l2=a[m:h]

    i,j,k=0,0,l

    while i<len(l1) and j<len(l2):
        if (l1[i]<l2[j]):
            a[k]=l1[i]
            i+=1
        else:
            a[k]=l2[j]
            j+=1
        k+=1
    while i<len(l1):
        a[k]=l1[i]
        k+=1
        i+=1
    while j<len(l2):
        a[k]=l2[j]
        k+=1
        j+=1

# def mergesort(a,l,h):
#     if (l<h):
#         mid=(l+h)//2
#         mergesort(a,l,mid)
#         mergesort(a,mid+1,h)
#         merge(a,l,mid,h)

def mergesort(a):
    if len(a)>1:
        mid=len(a)//2
        l1=a[:mid]
        l2=a[mid:]

        mergesort(l1)
        mergesort(l2)

        i,j,k=0,0,0

        while i<len(l1) and j<len(l2):
            if (l1[i]<l2[j]):
                a[k]=l1[i]
                i+=1
            else:
                a[k]=l2[j]
                j+=1
            k+=1
        while i<len(l1):
            a[k]=l1[i]
            k+=1
            i+=1
        while j<len(l2):
            a[k]=l2[j]
            k+=1
            j+=1
        

a=[1,4,2,3,5,7,6,10,9]

mergesort(a)

print(a)
