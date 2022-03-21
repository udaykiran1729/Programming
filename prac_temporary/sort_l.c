#include<stdio.h>
#include<stdlib.h>

//sorting of linked lists

struct node{
    int data;
    struct node* next;
}*new,*temp1,*temp2;

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

void sort(){
    int temp;
    temp1=head;
    while(temp1!=NULL){
        temp2=head;
        while(temp2!=NULL){
            if (temp1->data<temp2->data){
                temp=temp1->data;
                temp1->data=temp2->data;
                temp2->data=temp;
            }
            temp2=temp2->next;
        }
        temp1=temp1->next;
    }
}

void disp(){
    temp1=head;
    while(temp1!=NULL){
        printf("%d ",temp1->data);
        temp1=temp1->next;
    }
}

int main(){
    
    int c=1,item;
    while(c>0){
        printf("enter the choice");
        scanf("%d",&c);
        switch(c){
            
            case 1:
                    
                    printf("enter the value:");
                    scanf("%d",&item);
                    create(item);
                    break;
            case 2:
                    disp();
                    break;
            case 3:
                    printf("after sorting:\n");
                    sort();
                    disp();
                    break;
        }
    }
    return 0;
}