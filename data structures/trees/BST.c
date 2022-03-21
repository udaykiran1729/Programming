#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node* prev;
    int data;
    struct node* next;
}*new,*temp,*temp1;

struct node* head=NULL;
struct node* tail=NULL;
struct node* traverse(struct node* root,int item){
    temp=root;
    if (temp==NULL){
        temp->prev->next=new;
    }
    else{
    if (temp->data>item){
            traverse(temp->next,item);
    }
    else{
            traverse(temp->prev,item);
    }
    }
}

void insert(int item){
    new=(struct node*)malloc(sizeof(struct node));
    new->data=item;
    new->prev=NULL;
    new->next=NULL;
    if (head==NULL){
        head=new;
        tail=new;
    }
    else{
        new=traverse(head,item);
        tail->next=new;
        tail=new;
    }
}

void inorder(struct node* root){
    if(root!=NULL){
        inorder(root->prev);
        printf("%d",root->data);
        inorder(root->next);
    }
}

int main(){
    int n,item;
    printf("enter the no of numbers:");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        printf("enter the element:");
        scanf("%d",&item);
        insert(item);
    }
    printf("inorder expression is:\n");
    inorder(head);
    return 0;
}