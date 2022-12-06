# def Gvalue(code):
#         if code=="A":
#                 return(10)
#         if code=="AB":
#                 return(9)
#         if code=="B":
#                 return(8)
#         if code=="BC":
#                 return(7)
#         if code=="C":
#                 return(6)
#         if code=="CD":
#                 return(5)
#         if code=="D":
#                 return(4)
        
# # varibles used for storing data

# ROLL_GRADEsum={}
# Roll_course_count={}
# Roll_name={}

# #COURSES INPUT SECTION

# type_course=input()
# enter_course_detail=input()
# next_input=input()
# while(next_input!="Students"):
#         next_input=input()

# #STUDENT INPUT SECTION

# roll,name=input().split('~')
# Roll_name[roll]=name
# ROLL_GRADEsum[roll]=0
# Roll_course_count[roll]=0
# next_input=input()
# while('~' in next_input):
#     roll,name=next_input.split('~')
#     Roll_name[roll]=name
#     ROLL_GRADEsum[roll]=0
#     Roll_course_count[roll]=0
#     next_input=input()

# #GRADES INPUT SECTION

# code,sem,year,Rnum,grade=input().split('~')
# if Rnum in ROLL_GRADEsum.keys():
#     ROLL_GRADEsum[Rnum]=ROLL_GRADEsum[Rnum]+Gvalue(grade)
#     Roll_course_count[Rnum]=Roll_course_count[Rnum]+1
# next_input=input()
# while(next_input!="EndOfInput"):
#     code,sem,year,Rnum,grade=next_input.split('~')
#     if Rnum in ROLL_GRADEsum.keys():
#         ROLL_GRADEsum[Rnum]=ROLL_GRADEsum[Rnum]+Gvalue(grade)
#         Roll_course_count[Rnum]=Roll_course_count[Rnum]+1
#     next_input=input()

# #print(Roll_course_count)
# #print(ROLL_GRADEsum)
# #print(Roll_name)

# #RESULT COMPUTATION

# Sort_roll=sorted(Roll_name)
# for key in Sort_roll:
#     if ROLL_GRADEsum[key]!=0:
#         ans=round((ROLL_GRADEsum[key]/Roll_course_count[key]),2)
#         print(key+"~"+Roll_name[key]+"~"+str(ans))
#     else:
#         print(key+"~"+Roll_name[key]+"~"+"0")

# from math import floor,sqrt

# def conv(s):
#     c=0
#     for i in range(len(s)):
#         c+=int(s[i])*(2**i)
#     return c

# for _ in range(int(input())):
#     n=int(input())
#     s=input()
#     m=conv(s)
#     y=0
#     ma=-1
#     for i in range(1,n+1):
#         re=m^(m/(2**i))
#         if re<ma:
#                 ma=temp;
#                 y=i
#         print(y)
        

l=[1,0,2,4,5,2,0,5,0]

i,j=0,1
le=len(l)
# max1,max2=0,0

# if l[0]>l[1]:
#     max1=l[0]
#     max2=l[1]
# else:
#     max1=l[1]
#     max2=l[0]

# for i in range(2,len(l)):

#     if l[i]>max1:
#         max2=max1
#         max1=l[i]
#     elif l[i]>max2 and l[i]<=max1:
#         max2=l[i]



while(i<le and j<le):
    if l[i]==0:
        t=l[i]
        l[i]=l[j]
        l[j]=t
        i+=1
        j+=1
    else:
        j+=1
        i+=1
    print(l)
# print(l)