#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(*arr);
    
    for (int i=0;i<n/2;i++){
        int temp=arr[i];
        replace(arr,arr+5,temp,*(arr+n-i-1));
        replace(arr+i+1,arr+5,arr[n-i-1],temp);

    }
    for (int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}