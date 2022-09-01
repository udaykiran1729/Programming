#include<stdio.h>

void swap(int *a,int *b){
    printf("%d %d",*a,*b);
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int m=10;
    int *j;
    j=(int*)m;
    j++;
    printf("%d",2<<1);
}