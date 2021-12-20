#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
}*temp,*newnode;

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
    printf(" %d",temp->data);
}

void reverse()
{
    
    /*temp=tail;
    while(temp->next!=tail)
    {
        if (head1==NULL)
        {
            head1=temp;
            tail1=temp;
        }
        else
        {
            tail1->next=temp;
            tail1=temp;
            tail1->next=NULL;
        }
        printf("%d")
    }*/
    //printf("%d",temp->data);

    //temp=tail;
    while(temp->next!=head)
    {
        temp=tail;
        if (head1==NULL)
        {
            head1=temp;
            tail1=temp;
        }
        else{
            tail1->next=temp;
            tail1=temp;
            temp=head;
            while (temp->next!=tail)
            {
                temp=temp->next;
            }
            temp->next=NULL;
            tail=temp;

        }

    }
}

void main()
{
    create();
    //printf("123\n");
    disp();
    reverse();
    disp_1();
}