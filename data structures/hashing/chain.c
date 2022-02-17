// seperate_chaining
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
}*temp,*newnode;

struct node *h[10]={NULL};

int hash(int value){
    return(value%10);
}

void insert()
{
    int i,item;
    printf("enter the element:");
    scanf("%d",&item);
    i=hash(item);
    newnode=(struct node* )malloc(sizeof(struct node));
    newnode->data=item;
    newnode->next=NULL;
    if(h[i]==NULL){
        h[i]=newnode;
    }
    else{
        temp=h[i];
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }

}

void display(){
    for(int i=0;i<10;i++){
        printf("\n the entries at %d index is",i);
        if(h[i]==NULL){
            printf("no hash \n");
        }
        else{
            
            for(temp=h[i];temp!=NULL;temp=temp->next){
                printf("%d->  ",temp->data);
            }
            printf("\n");
        }
        
    }
}
void search(){
    int i,value,c;
    printf("enter the value to search");
    scanf("%d",&value);
    i=hash(value);
    temp=h[i];
    while(temp!=NULL)
    {
        if(temp->data==value)
        {
            c++;
            break;
        }
        temp=temp->next;
    }
    if(c!=0){
        printf("%d is present",value);
    }
    else{
        printf("%d is not found",value);
    }
}

void main(){
    printf("enter any number below:\n");
    int n=1;
    while (n>=1 && n<=3)
    {
        printf("\nPress 1. Insert\n 2. Display \n3. Search \n4.Exit");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            //case 4:exit(0);
                                           
        }
    }
    
}