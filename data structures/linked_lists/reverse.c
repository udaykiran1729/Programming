#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
}*temp,*newnode,*temp1,*temp2;

struct node* head=NULL;
struct node* tail=NULL;
struct node* head1=NULL;
struct node* tail1=NULL;
void create()
{
    int i=0;
    while(i<5){
    newnode=(struct node*)malloc(sizeof(struct node));
    int d;
    printf("enter the data:");
    scanf("%d",&d);
    newnode->data=d;
    newnode->next=newnode;
    if (head==NULL)
    {   
        head=newnode;
        tail=newnode;
    }
    else{
        tail->next=newnode;
        tail=newnode;
        tail->next=head;
    }
    i++;
    }
}

void disp(){
    temp=head;
    //printf("%d",temp->data);
    while(temp->next!=head)
    {
        printf(" %d \n",temp->data);
        temp=temp->next;
    }
    printf(" %d",temp->data);
}

void disp_1(){
    temp=head1;
    //printf("%d",temp->data);
    printf("\nreverse:\n");
    while(temp->next!=NULL)
    {
        printf(" %d \n",temp->data);
        temp=temp->next;
    }
    printf(" %d\n",temp->data);
}

void rev()
{
    temp1=head;
    while(temp1->next!=NULL)
    {
        temp2=head;
        while(temp2->next!=NULL)
        {
            temp2=temp2->next;
        }
        /*printf("%d\n",temp2->data);
        temp2->next=NULL;
        tail=temp2;
        temp1=temp1->next;*/

        if (head1==NULL)
        {
            head1=temp2;
            tail1=temp2;
        }
        else{
            tail1->next=temp2;
            tail1=temp2;
        }

        temp1=temp1->next;

    }
}

void main()
{
    create();
    //printf("123\n");
    disp();
    rev();
    disp_1();
}