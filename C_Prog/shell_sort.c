#include<stdio.h>
int main()
{
    int l,n,i,j,temp;
    printf("enter the length:");
    scanf("%d",&l);
    int a[l];
    for (i=0;i<l;i++)
    {
        printf("enter the element:");
        scanf("%d",&a[i]);
    }
    n=l/2;
    while(n>0){
    for (i=0;i<l;i++)
    {
        if (a[i]>a[i+n])
        {
            temp=a[i];
            a[i]=a[i+n];
            a[i+n]=temp;
        }
    }
    n--;
    }
    for (i=0;i<l;i++)
    {
        printf("%d \n",a[i]);
    }
    return 0;
}