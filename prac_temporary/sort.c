#include<stdio.h>

/*
//BUBBLE SORT

int main()
{
    int n,e,temp;
    printf("enter the length:");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        printf("enter the element:");
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (a[i]>a[j]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for (int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}*/


/*

//insertion sort

int main(){
    int n,e,temp,j;
    printf("enter the length:");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        printf("enter the element:");
        scanf("%d",&a[i]);
    }
    for (int i=1;i<n;i++){
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
     for (int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}*/

//selection sort

int main(){
    int n,e,min,j,temp;
    printf("enter the length:");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        printf("enter the element:");
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        min=i;
        for (j=i+1;j<n;j++){
            if (a[j]<a[min]){
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    for (int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }return 0;
}