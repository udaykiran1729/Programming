#include<iostream>
using namespace std;

class me{
    public: int m=10; 
    me(int n){
        cout<<"in private";
    }
    void mew(){
        cout<<endl<<"norm function";
    }
};

int main(){
    me m(10);
    m.mew();
    
}