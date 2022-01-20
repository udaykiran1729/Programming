#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*newnode,*temp,*temp1,*temp2;

struct node *head=NULL;
struct node *tail=NULL;
struct node *head2=NULL;
struct node *tail2=NULL;

void create()
{
    int d,i=0;
    
    while(i<5){
    printf("enter the data:");
    scanf("%d",&d);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=d;
    newnode->next=NULL;
    if (head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
    i++;
    }
}

void disp()
{
    temp=head;
    while(temp!=NULL){
        printf("%d \n",temp->data);
        temp=temp->next;
    }

}

void reverse()
{
    temp1=head;
    temp2=head;
    while(temp1!=NULL){
            temp2=head2;
        while(temp2->next!=tail){
            temp2=temp2->next;
        }
        newnode=(struct node*)malloc(sizeof(struct node));
        if (head2==NULL)
        {
            head2=newnode;
            tail2=newnode;
        }
        else
        {
            tail2->next=newnode;
            tail2=newnode;
        }
        temp2->next=NULL;
    }
}

int main()
{
    create();
    disp();
    return 0;
}