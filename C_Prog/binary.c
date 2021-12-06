#include<stdio.h>
int main()
{
    int n,l;
    printf("enter the length of array:");
    scanf("%d",&l);
    int a[l];
    printf("enter the element:");
    scanf("%d",&n);
    for (int i=0;i<l;i++)
    {
        printf("enter the element:");
        scanf("%d",&a[i]);
    }
    int mid=l/2;
    while (mid>0 && mid<l)
    {
        if (a[mid]>n)
        {
            mid=mid+mid/2;
        }
        else if (a[mid]<n)
        {
            mid=mid/2;
        }
        else
        {
            printf("at the position %d",mid);
            break;
        }
    }
    printf("%d",mid);
    return 0;
}