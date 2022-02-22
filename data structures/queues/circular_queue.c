#include<stdio.h>
int a[10],front=0,rear=0,c=0,n;

void insert(int item){
    if (c==10){
        printf("queue is full");
    }
    else{
        a[rear]=item;
        //printf("%d\n",a[rear]);
        rear=(rear+1)%(n);
        //printf("%d",rear);
        c++;
    }
}

void del(){
    if (c==0){
        printf("queue is empty\n");
    }
    else{
        front=(front+1)%n;
        c--;
    }
}

void disp(){
    int temp=0,i=front;
    if (front<=rear){
        while(temp<n){
            printf("%d \n",a[i]);
            temp++;
            i=(i+1)%n;
        }
    }
    else{
        i=rear;
        while(temp<n){
            printf("%d \n",a[i]);
            temp++;
            i=(i+1)%n;
        }
    }
}

int main(){
    printf("enter the length of queue:");
    scanf("%d",&n);
    int item;
    /*for (int i=0;i<n;i++){
        
        insert(item);
    }
    printf("the elements in the queue are:\n");
    disp();*/
    char cho;
    /*printf("enter a key rather than 'n':");
    scanf("%c",&cho);*/
    do{
        int d;
        
        printf("enter the choice:\n1.insert\n2.delete\n3.delete\n");
        scanf("%d",&d);
        switch (d)
        {
        case 1:
            printf("enter the element:");
            scanf("%d",&item);
            insert(item);
            break;
        case 2:
            del();
            break;
        case 3:
            disp();
            break;
        default:
            printf("enter the correct choice\n");
            break;
        }
        printf("continue.....(y)");
        scanf("%c",&cho);
    }while(cho!='n');
}