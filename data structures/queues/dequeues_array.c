#include<stdio.h>

int a[10]={NULL},c=0,n=10,front=0,rear=0;

void insert_rear(int item){
        if (c==10){
                printf("the queue is full");
        }
        
        else{
                a[rear]=item;
                //printf("in the fun %d",a[rear]);
                rear=(rear+1)%10;
                c++;
        }
}

void insert_front(int item){
        if (c==10){
                printf("the queue is full");
        }
        else{
                if (front==0 && c!=0){
                        //printf("can't perform front insertion as you have reached the end");
                        front=n-1;
                        a[front]=item;
                        
                }
                else if(front==0 && c==0){
                        a[front]=item;
                        rear=(rear+1)%10;
                }
                /*a[--front]=item;
                c++;*/
                else{
                        a[--front]=item;
                }
                c++;
        }
}

void del_front(){
        if (c==0){
                printf("queue is empty");
        }
        else{
                front=(front+1)%10;
                c--;
        }
}
void del_rear(){
        if (c==0){
                printf("queue is empty");
        }
        else{
                if (rear==0){
                        rear=n-1;
                }
                else{
                        rear--;
                }
                c--;
        }
}

void disp(){
        int i=0;
        //int temp=front,i=0;
        //printf("rear= %d",rear);
        while(i<10){
                printf("%d  ",a[i]);
                //temp=(temp+1)%10;
                i++;
        }
}

/*void disp2(){
        int i=front,temp=0;
        //if (front>rear){
        while(i!=rear){
                printf("%d  ",a[i]);
                i=(i+1)%6;
                temp=temp+1;
        }
        /*}
        else{
                while(i!=)
        }*/
        


int main(){
        /*int item,n1;
        printf("enter the no of elements:");
        scanf("%d",&n1);
        for (int i=0;i<n1;i++){
                printf("enter the element:");
                scanf("%d",&item);
                insert_rear(item);
        }
        printf("the elements in the queue are:\n");
        disp();
        int fro;
        printf("enter the no of elements to be inserted in front:");
        scanf("%d",&fro);
        for (int i=0;i<fro;i++){
                printf("ente the element :");
                scanf("%d",&item);
                insert_front(item);
        }
        printf("\nthe elements are:\n");
        disp();
        printf("\nenter the element to be inserted in rear:");
        scanf("%d",&item);
        insert_rear(item);
        printf("\nthe elements are:\n");
        disp();
        printf("the no of elemnts to be deleted_front:");
        scanf("%d",&fro);
        for (int i=0;i<fro;i++){
                del_front();
        }
        printf("\nthe elements in the queue are:\n");
        disp();
        printf("the elements to be deleted_rear:\n");
        scanf("%d",&fro);
        for ( int i=0;i<fro;i++){
                del_rear();
        }
        printf("\nthe elements are:\n");
        disp();
        return 0;*/

        int n1,choice=1,item;
        /*printf("enter the choice");
        scanf("%d",&n1);*/
        while(choice!=0){
                printf("enter the choice:\n1.insert_front\n2.insert_rear\n3.delete_rear\n4.delete_front\n5.display\n6.display-2");
                scanf("%d",&n1);
                switch(n1){
                        case 1:
                                printf("enter the element:");
                                scanf("%d",&item);
                                insert_front(item);
                                break;
                        case 2:
                                printf("enter the element:");
                                scanf("%d",&item);
                                insert_rear(item);
                                break;
                        case 3:
                                del_rear();
                                break;
                        case 4:
                                del_front();
                                break;
                        case 5:
                                disp();
                                printf("\n");
                                disp2();
                                break;
                        
                        default:printf("enter the correct choice");
                }
                printf("do you want to continue....(1)");
                scanf("%d",&choice);
        }
        return 0;

}