#include<stdio.h>

void swap(int *a,int *b){
  int t=*a;
  *a=*b;
  *b=t;
}

void heapify(int a[],int n,int i){
  int largest=i;
  int left=2*i+1;
  int right=2*i+2;
  if (left<n && a[left]>a[largest]){
    largest=left;
  }
  if(right<n && a[right]>a[largest])
  {
    largest=right;
  }
  if (largest!=i){
    swap(&a[i],&a[largest]);
    heapify(a,n,largest);
  }
}

void heapsort(int a[],int n)
{
  for (int i=n/2-1;i>=0;i--){
    heapify(a,n,i);
  }
  for (int i=n-1;i>=0;i--){
    swap(&a[0],&a[i]);
    heapify(a,i,0);
  }
}

void disp(int a[],int n){
  for (int i=0;i<n;i++){
    printf("%d ",a[i]);
  }
}

void main(){
  int n;
  printf("enter the length:");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        printf("enter the element:");
        scanf("%d",&a[i]);
    }

    printf("before sorting: \n");
    disp(a,n);
    printf("\nafter sorting:");
    heapsort(a,n);
    disp(a,n);
}