// #include<iostream>

// using namespace std;

// class me{
//     public:
//     static int m;
//     // me(int a):m(a){}

// };

// int me::m=10;

// int main(){
//     const int m;
//     cout<<a.m<<endl;
//     cout<<"in the main function";
// }

// #include<iostream>
// using namespace std;

// class a{
//     public:
//     void print(){
//         cout<<"in the a class";
//     }
// };

// class b: public a{
//     public:
//     cout<<"in the class b";
//     a::print();

// };
#include <iostream>
using namespace std;
class base {
    protected:
        int n1;
    public:
        base(int x) : n1(x) { cout<<"base"<<endl; }
        void f1() { cout<< "base" << ++n1 << endl; }
};
class derived : public base {
    public:
        derived(int x) : base(x) { }
        using base::f1;
        void f1(int a) { cout << ++n1 << endl; }
};
int main(){
    derived d(10);
    d.f1(); //LINE-1
    return 0;
}