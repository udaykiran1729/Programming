#include<stdio.h>
#include<string.h>
struct Det
{
    char name[20];
    int quot;
};
void read(struct Det *det , int n)
{
    for (int i=0;i<n;i++)
    {
        printf("enter the name and quotient:");
        scanf("%s %d",& det[i].name,& det[i].quot);
    }
}
/*void disp(struct Det *det,int n)
{
    for (int i=0;i<n;i++)
    {
        printf("%s : %d \n",det[i].name,det[i].quot);
    }
}*/
void cmp(struct Det *det,int k,int n)
{
    int i,j;
    struct Det temp;
    for (i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if (det[i].quot<det[j].quot)
            {
                /*max1=det[j].quot;
                max2=det[i].quot;*/
                strcpy(temp.name , det[j].name);
                temp.quot= det[j].quot;
                strcpy(det[j].name,det[i].name);
                det[j].quot=det[i].quot;
                strcpy(det[i].name,temp.name);
                det[i].quot=temp.quot;
            }
            //printf("%s : %d \n",det[i].name,det[i].quot);
            
        }
        //printf("1 . %s : %d \n",det[i].name,det[i].quot);
        
    }
    //disp(det,n);
    for (i=0;i<n-1;i++)
    {
        if (det[i].quot==det[i+1].quot)
        {
            if (strcmp(det[i].name,det[i+1].name)>0)
            {
                strcpy(temp.name , det[i].name);
                strcpy(det[i].name,det[i+1].name);
                strcpy(det[i+1].name,temp.name);
            }
        }
    }
    /*for (i=0;i<n;i++)
    {
        if (det[i].quot==max1)
        {
            printf("max:%s",det[i].name);

        }
        if (det[i].quot==max2)
        {
            printf("max2:%s",det[i].name);
        }
    }*/
}
int main()
{
    int n,k;
    printf("enter the no of fans and maximum:");
    scanf("%d %d",&n,&k);
    struct Det det[n];
    read(det,n);
    //disp(det,n);
    cmp(det,k,n);
    //disp(det,n);
    for (int i=0;i<k;i++)
    {
        printf("%s \n",det[i].name);
    }
    return 0;
}