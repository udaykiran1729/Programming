#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
}*newnode,*temp;


struct node* head=NULL;
struct node* tail=NULL;


void create()
{
    char ch;
    int value;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d",&value);
        newnode->data=value;
        newnode->next=NULL;
        if (head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }
        printf("enter to 'y' cont:");
        fflush(stdin);
        scanf("%c",&ch);
    }
    while(ch=='y');
}


void disp()
{
    temp=head;
    while (temp!=NULL)
    {
        printf("%d \n",temp->data);
        temp=temp->next;
    }
}

void add_end()
{

    int value;
    printf("enter the element to be inserted:");
    scanf("%d",&value);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    tail->next=newnode;
    tail=newnode;

}


void add_head()
{
    int value;
    printf("enter the value");
    scanf("%d",&value);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=head;
    head=newnode;
}
//not completed
void insert()
{
    int value,n;
    printf("enter the position:");
    scanf("%d",&value);
    printf("enter the position:");
    scanf("%d",&n);
    
}
//not completed


void main()
{
    create();
    printf("before adding:\n");
    disp();
    add_end();
    printf("after inserting at end:\n");
    disp();
    add_head();
    printf("adding at head:\n");
    disp();

}