
# def gcd(a, b):
# 	if b==0:
# 		return a
# 	return gcd(b, a%b)

# def Pour(toJugCap, fromJugCap, d):



# 	fromJug = fromJugCap
# 	toJug = 0


# 	step = 1
# 	while ((fromJug is not d) and (toJug is not d)):

        
# 		temp = min(fromJug, toJugCap-toJug)


# 		toJug = toJug + temp
# 		fromJug = fromJug - temp

# 		step = step + 1
# 		if ((fromJug == d) or (toJug == d)):
# 			break


# 		if fromJug == 0:
# 			fromJug = fromJugCap
# 			step = step + 1


# 		if toJug == toJugCap:
# 			toJug = 0
# 			step = step + 1
			
# 	return step


# def minSteps(n, m, d):
# 	if m> n:
# 		m,n=n,m
		
# 	if (d%(gcd(n,m)) is not 0):
# 		return -1
	

# 	return(min(Pour(n,m,d), Pour(m,n,d)))



# n = 3
# m = 5
# d = 4

# print('Minimum number of steps required is',
# 							minSteps(n, m, d))
	
# This code is contributed by Sanket Badhe


from math import gcd

m=int(input())
n=int(input())
cap=int(input())


def mins(m,n,cap):
    if (m<n):
        m,n=n,m
    if (cap%gcd(m,n)!=0):
        return -1
    return min(find(m,n,cap),find(n,m,cap))


def find(fromj,to,cap):
    fro=fromj
    t=0
    c=1

    while(fromj!=cap and to!=cap):

        temp=min(fro,to-t)

        t+=temp
        fro-=temp
        c+=1
        if (fro==cap or t==cap):
            break

        if (fro==0):
            fro=fromj
            c+=1

        if (t==to):
            t=0
            c+=1
    return c


print(mins(m,n,cap))
