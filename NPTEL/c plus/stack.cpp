#include<iostream>
#include<string>
int arr[10],a=0;
using namespace std;

class sta{
    public:
    //int arr[10];
    //int n=size(arr);
    void push(int m){
        arr[a]=m;
        a++;
    }
    int pop(){
        return arr[--a];
    }
    void disp(){
        for (int i=0;i<a;i++){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){
    int a1;
    //int arr[10];
    sta se;
    for ( int i=0;i<5;i++){
        cin>>a1;
        se.push(a1);
    }
    se.disp();
    cout<<endl<<se.pop()<<endl;
    se.disp();
}