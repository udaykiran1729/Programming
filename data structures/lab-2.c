#include<stdio.h>
typedef struct olym
{
    char name[10];
    int quot;
};
void swap()
int main()
{
    int n,n1,i;
    printf("enter the no of people and maximum");
    scanf("%d %d",&n,&n1);
    struct olym oly[n];
    char b[n][10];
    for (i=0;i<n;i++)
    {
        printf("enter the name and quotient:");
        scanf("%s %d",&oly[i].name,&oly[i].quot);
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (oly[i].quot<oly[j].quot)
            {
                swap(oly[i],oly[j]);
            }
        }
    }
    /*for (i=0;i<n;i++)
    {
        printf("enter the name and quotient:");
        scanf("%s %d",&b[i][10],&a[i]);

    }
    char b1[n];
    int max1,max2;
    for (i=0;i<n-1;i++)
    {
        if (a[i]<a[i+1])
        {
            max1=i+1;
            max2=i;
        }

    }
    printf("%s : %s",b[max1][10],b[max2][10]);
    return 0;*/
}