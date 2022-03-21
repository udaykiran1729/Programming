#include<stdio.h>
/*
linear search

int main()
{
    int n,e,c=1;
    printf("enter the length:");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        printf("enter the element:");
        scanf("%d",&a[i]);
    }
    printf("enter the element to earch:");
    scanf("%d",&e);

    for (int i=0;i<n;i++){
        if(a[i]==e){
            c=0;
            printf("element found at index %d",i);
            break;
        }
    }
    if (c==1){
        printf("element not found");
    }
}

*/

//binary search
int main(){
    int n,e,mid,c=0;
    printf("enter the length:");
    scanf("%d",&n);
    int a[n];
    mid=n/2;
    for (int i=0;i<n;i++){
        printf("enter the element:");
        scanf("%d",&a[i]);
    }
    printf("enter the element to earch:");
    scanf("%d",&e);
    int l=0,h=n-1;
    mid=(l+h)/2;
    while (l<=h){
        if (a[mid]==e){
            c=1;
            printf("element found at: %d",mid);
            break;
        }
        else if(a[mid]>e){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
        mid=(l+h)/2;
    }
    if (c==0){
        printf("not found");
    }
    
}

/*
int main(){
    printf("%d",1/2);
}

*/