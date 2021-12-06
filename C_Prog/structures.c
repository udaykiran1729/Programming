#include<stdio.h>
struct me
{
    int a;
    float b;
    char c[20];
}s1,s2;
int main()
{
    int i,n=2;
    for (i=0;i<n-1;i++)
    {
        printf("enter the %dst person name:",i+1);
        scanf("%[^\n]s",&s1.c);
        printf("enter the age:");
        scanf("%d",&s1.a);
    }
    printf("name:%s\nage:%d",s1.c,s1.a);
    
}