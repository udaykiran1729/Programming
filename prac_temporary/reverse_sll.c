#include<stdio.h>
#include<stdlib.h>

//reversing of single linked list

struct node{
    int data;
    struct node* next;
}*new,*temp1,*current,*next=NULL,*prev=NULL;

struct node *head=NULL,*tail=NULL;

void create(int item){
    new=(struct node*)malloc(sizeof(struct node));
    new->data=item;
    new->next=NULL;
    if(head==NULL){
        head=new;
        tail=new;
    }else{
        tail->next=new;
        tail=new;
    }
}

void rev(){
    current=head;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
}

void disp(){
    temp1=head;
    while(temp1!=NULL){
        printf("%d ",temp1->data);
        temp1=temp1->next;
    }
}

int main(){
    int i=0,item;
    while(i<4){
        printf("enter the item:");
        scanf("%d",&item);
        create(item);
        i++;
    }
    printf("before reversal:\n");
    disp();
    printf("after reversal:\n");
    rev();
    disp();
    return 0;
}