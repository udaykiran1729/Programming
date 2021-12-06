for _ in range(int(input())):
    n=int(input())
    l=[]
    l2=[]
    for i in range(n):
        l1=[]
        l1=list(map(int,input().split()))
        l.append(l)
        l2.extend(l)
    r=0
    sum=0
    c=0
    for i in range(n):
        for j in range(n):
            if i==j:
                m=l[i][j]
                sum+=m
    print(sum)