#include<stdio.h>
struct stu
{
     char name[20];
     int roll;
     int m1,m2,m3;
};


void read(struct stu *Stu,int n)
{
        for (int i=0;i<n;i++)
        {
                printf("enter the name:");
                scanf("%s",Stu[i].name);
                printf("enter the roll no:");
                scanf("%d",&Stu[i].roll);
                printf("enter the marks of subject-1:");
                scanf("%d",&Stu[i].m1);
                printf("enter the marks of subject-2:");
                scanf("%d",&Stu[i].m2);
                printf("enter the marks of subject-3:");
                scanf("%d",&Stu[i].m3);
        }
}


void disp(struct stu *Stu,int n)
{
        for (int i=0;i<n;i++)
        {
                printf("\nname: %s \n",Stu[i].name);
                printf("roll: %d \n",Stu[i].roll);
                printf("marks-1:%d \nmarks-2:%d \nmarks-3:%d\n",Stu[i].m1,Stu[i].m2,Stu[i].m3);
                printf("\n \n");
         }
}


int main()
{
        int n;
        printf("enter the no of students:");
        scanf("%d",&n);
        struct stu Stu[n];
        read(Stu,n);
        disp(Stu,n);
        return 0;
}