#include<stdio.h>

void merge(int a[],int l,int m,int h){

        int n1=m-l+1,n2=h-m;
        int l1[m-l+1],l2[h-m];
        for (int i=0;i<n1;i++){
            l1[i]=a[l+i];
        }
        for (int i=0;i<n2;i++){
            l2[i]=a[m+i+1];
        }

        int i=0,j=0,k=l;

        while(i<n1 && j<n2){
            if (l1[i]>l2[j]){
                a[k++]=l2[j++];
            }
            else{
                a[k++]=l1[i++];
            }
        }

        while(i<n1){
            a[k++]=l1[i++];
        }
        while(j<n2){
            a[k++]=l2[j++];
        }

}


void mergesort(int a[],int l,int h)
{
    if (l<h){

        int mid=(l+h)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        merge(a,l,mid,h);
    }
}

void print(int a[],int n){
    for (int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main(){

    int a[]={3,1,2,4,7,6,5};
    print(a,7);
    mergesort(a,0,7);
    print(a,7);

}