#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
}*temp,*newnode;

struct node *head=NULL;
struct node *tail=NULL;

void push(){
  newnode=(struct node*)malloc(sizeof(struct node));
  int m;
  printf("enter the data :");
  scanf("%d",&m);
  newnode->data=m;
  newnode->next=NULL;
  if (head==NULL && tail==NULL){
    head=newnode;
    tail=newnode;
  }
  else{
    tail->next=newnode;
    tail=newnode;
  }
}

  void pop(){
    temp=head;
    while(temp->next!=tail){
      temp=temp->next;
    }
    temp->next=NULL;
    fflush(temp->next);
  }
  void disp(){
    temp=head;
    while(temp!=tail){
      printf("%d ",temp->data);
      temp=temp->next;
    }
    printf("%d ",temp->data);
  }

  int main(){
    int n;
    printf("enter the elements to be inserted in the stack: ");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
      push();
    }
    printf("the elements are: \n");
    disp();
    pop();
    disp();
    return 0;
  }
