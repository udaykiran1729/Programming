#include<stdio.h>
#include<stdlib.h>
struct node{
  int coeff,deg;
  struct node *next;
}*temp1,*temp2,*newnode;

struct node *tail1=NULL,*tail2=NULL,*head1=NULL,*head2=NULL;

struct node* insert(struct node *head,struct node *tail,int n,int d){
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->coeff=n;
  newnode->deg=d;
  newnode->next=NULL;
  if (head==NULL){
    head=newnode;
    tail=newnode;
  }
  else{
    tail->next=newnode;
    tail=newnode;
  }
  return head;
}


void add(){
  temp1=head1;
  temp2=head2;
  
  while(temp1&&temp2!=NULL)
  {
    if (temp1->deg==temp2->deg){
      printf("%d x^%d +",temp1->coeff+temp2->coeff,temp1->deg);
      temp1=temp1->next;
      temp2=temp2->next;
    }
    else if(temp1->deg>temp2->deg){
      printf("%d x^%d +",temp1->coeff,temp1->deg);
      temp1=temp1->next;
    }
    else{
      printf("%d x^%d +",temp2->coeff,temp2->deg);
      temp2=temp2->next;
    }
  }
  if (temp1==NULL)
  {
    while(temp2!=NULL){
      printf("%d x^%d",temp2->coeff,temp2->deg);
      temp2=temp2->next;
    }
  }
  else
  {
    while(temp1!=NULL){
      printf("%d x^%d",temp1->coeff,temp1->deg);
      temp1=temp1->next;
    }
  }
}

void disp(struct node *head){
  temp1=head;
  //printf(" %d ",head->data);
  while(temp1!=NULL){
    printf(" %d x^%d +",temp1->coeff,temp1->deg);
    temp1=temp1->next;
  }
}

/*void delete(){
  int pos;
  printf("enter the positon");
  scanf("%d",&pos);
  temp=head;
  for (int i=0;i<pos-1;i++){
    temp=temp->next;
  }
  if (temp->next==NULL){
    temp->prev->next=NULL;
  }
  else{
    temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
  }
  
}*/

int main(){
  printf("enter the no of elements:");
  int n1,n2,c,d;
  scanf("%d %d",&n1,&n2);
  for (int i=0;i<n1;i++){
    printf("enter the coefficient of 1:");
    scanf("%d",&c);
    printf("enter the degree of 1:");
    scanf("%d",&d);
    head1=insert(head1,tail1,c,d);
  }
  for (int i=0;i<n2;i++){
    printf("enter the coefficient of 2:");
    scanf("%d",&c);
    printf("enter the degree of 2:");
    scanf("%d",&d);
    head2=insert(head2,tail2,c,d);
  }
  printf("the elements are:\n");
  disp(head1);
  disp(head2);
  add();
}