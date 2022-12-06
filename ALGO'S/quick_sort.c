#include<stdio.h>

void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

int partition(int a[],int l,int h){
    int piv=a[l];
    int i=l,j=h;

    while(i<j)
    {
        do{
            i++;
        }while(a[i]<=piv);

        do{
            j--;
        }while(a[j]>piv);

        if (i<j){
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[l],&a[j]);
    return j;

}

void quicksort(int a[],int l,int h)
{
    if (l<h){
        int j=partition(a,l,h);
        quicksort(a,l,j-1);
        quicksort(a,j+1,h);
    }
}
void print(int a[])
{
    for (int i=0;i<7;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{
    int a[]={2,1,4,3,5,5,6};
    print(a);
    quicksort(a,0,7);
    print(a);
}