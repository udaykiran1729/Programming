#include<stdio.h>
#include<stdlib.h>
struct node
{
    int coe;
    int deg;
    struct node* next;
}*newnode,*temp1,*temp2;

struct node* head1=NULL;
struct node* tail1=NULL;
struct node* head2=NULL;
struct node* tail2=NULL;

void create(int n)
{
    int value,co,de,i=0;

    

    while (i<n){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the coefficient:");
    
    scanf("%d",&co);
    printf("enter the degree:");
    scanf("%d",&de);
    newnode->coe=co;
    newnode->deg=de;
    newnode->next=NULL;
    if (head1==NULL)
    {
        head1=newnode;
        tail1=newnode;
    }
    else{
        tail1->next=newnode;
        tail1=newnode;

    }
    i++;
    }
    i=0;
    while (i<n){
        newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the coefficient of 2:");
    
    scanf("%d",&co);
    printf("enter the degree of 2:");
    scanf("%d",&de);
    newnode->coe=co;
    newnode->deg=de;
    newnode->next=NULL;
    if (head2==NULL)
    {
        head2=newnode;
        tail1=newnode;
    }
    else{
        tail2->next=newnode;
        tail2=newnode;

    }
    i++;
    }
}

void disp()
{
    temp1=head1;
    temp2=head2;
    while(temp1!=NULL)
    {
        printf("%dX^%d+",temp1->coe,temp1->deg);
        temp1=temp1->next;
    }
    printf("\n \n");
    while(temp2!=NULL)
    {
        printf("%dX^%d+",temp2->coe,temp2->deg);
        temp2=temp2->next;
    }
}
 int main()
 {
     int n;
     printf("enter the no of terms:");
     scanf("%d",&n);
     create(n);
     disp();

 }