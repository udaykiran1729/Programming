#include<stdio.h>
#include<stdlib.h>

struct no{
    int m;
    struct no* next;
}*new;

struct no* create(){
    int n;
    struct no *head=NULL;
    struct no *temp=head;
    printf("Enter no of elements:");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        new=(struct no*)malloc(sizeof(struct no));
        int val;
        scanf("%d",&val);
        new->m=val;
        new->next=NULL;
        if (head==NULL){
            head=new;
            temp=head;
        }
        else{
            temp->next=new;
            temp=new;
        }
    }
    return head;
}

void disp(struct no *m){
    struct no *temp=m;
    while(temp!=NULL){
        printf("%d ",temp->m);
        temp=temp->next;
    }
}

struct no* merge(struct no *m,struct node *n){
    struct no *t1=m,*t2=n;
    struct no *head=NULL;
    struct no *te=head;
    if (t1==NULL)
        return t2;
    if (t2==NULL)
        return t1;
    while(t1!=NULL && t2!=NULL){
        new=(struct no*)malloc(sizeof(struct no));
        if (t1->m>t2->m){
            new->m=t2->m;
            t2=t2->next;
        }
        else{
            new->m=t1->m;t1=t1->next;
        }
        if(head==NULL){
            head=new;
            te=head;
        }
        else{
            te->next=new;
            te=new;
        }
    }
    if (t1!=NULL){
        te->next=t1;
    }
    if(t2!=NULL){
        te->next=t2;
    }
    return head;
}

int main(){
    struct no* lis[3];
    for (int i=0;i<3;i++){
        lis[i]=create();
    }

    for(int i=0;i<3;i++){
        disp(lis[i]);
    }
    printf("\n");
    struct no* m=NULL;

    for(int i=0;i<3;i++){
        m=merge(m,lis[i]);
    }
    disp(m);
}