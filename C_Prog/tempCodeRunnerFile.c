#include<stdio.h>
int main()
{
    int i,l,n,mid;
    printf("enter the length of array:");
    scanf("%d",&l);
    int a[l];
    printf("enter the element:");
    scanf("%d",&n);
    for (i=0;i<l;i++)
    {
        a[i]=i+1;
    }
    mid=l/2;
    while (a[mid]!=n)
    {
        if (n<a[mid])
        {
            mid=mid/2; 
        }
        else if (n>a[mid])
        {
            mid+=mid/2;
        }
    }
    printf("%d",mid);
    return 0;
}