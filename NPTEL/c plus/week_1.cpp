#include<iostream>
#include <bits/stdc++.h>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(int a,int b){
    return a>b;
}

int main(){
    vector<int> v={2,3,1,5,4,6};
    int arr[]={2,3,1,5,4,6};
    sort(arr,arr+5,compare);
    for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<sizeof(arr[0]);

}