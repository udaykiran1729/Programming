#include<stdio.h>
int main()
{
    int i,l,j,n,mid,key;
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
    for (i=0;i<l;i++)
    {
        key=a[i];
        j=i-1;
        while (a[j]!=a[i] && j<l)
        {
            a[i]=a[j];

        }
        a[i]=key;
    }
    for (i=0;i<l;i++)
    {
        printf("%d \n",a[i]);
    }
    return 0;
}