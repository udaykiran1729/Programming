# n=int(input())
# s=str(n)
# m=len(s)
# l,r=0,1
# s1=''
# c=0
# while(l<m and r<m):
#     if s[l]==s[r]:
#         r+=1
#         c+=1
#     else:
#         s1+=str(r-l)+s[l]
#         l=r
#         r+=1
# s1+=str(r-l)+s[l]
# print(s1)



from math import gcd
from math import sqrt
n=int(input())
c,t=0,0
for i in range(1,n//2):
    for j in range(i,n//2):
        if gcd(i,j)==1:
            m=(i**2)+(5*i*j)+3*(j**2)
            temp=(j**2)+5*i*j+3*(i**2)
            t+=1
            if sqrt(m)%1==0 and m<n:
                c+=1
            if sqrt(temp)%1==0 and temp<n:
                c+=1
print(c)
