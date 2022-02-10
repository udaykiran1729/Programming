#include<stdio.h>
//#include<stdlib.h>

int a[100];

int top=0,n;

void push(int item)
{
    if (top>n){
        printf("overload occurs");
    }
    else{
        a[top]=item;
        top++;
    }
}


int pop()
{
    if (top<0)
    {
        printf("underflow occurs");
    }
    else
    {
        return a[--top];
    }
}

void disp(){
    for (int i=0;i<top;i++){
        printf("%d \n",a[i]);
    }
}

int main(){
    int b,r;
    printf("enter the size of stack:");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf("enter the element:");
        scanf("%d",&b);
        push(b);
    }

    printf("/nafter poping elements in the stack will be:\n");
    
    disp();


    printf("poping \n");

    printf("how many elements do you want to remove:");
    
    scanf("%d",&r);

    for (int i=0;i<r;i++){
        printf("%d \n",pop());
    }

    disp();
    
    return 0;

}