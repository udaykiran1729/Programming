// #include<iostream>

// using namespace std;

// class comp{
//     public:
//     int r,i;

//     comp(int r,int i):r(r),i(i){}

//     void print(){
//         cout<<r<<"+i"<<i<<endl;
//     }

//     comp operator+(comp img){
//         comp t(0,0);
//         t.r=r+img.r;
//         t.i=i+img.i;
//         return t;
//     }

// };

// int main(){
//     comp num1(2,3),num2(3,4),num3(0,0);
//     num1.print();
//     num2.print();
//     num3=(num1+num2);
//     //num3=num1.+(num2);
//     num3.print();
// }


#include<iostream>
#include<algorithm>

using namespace std;

class me{
    int m, n;
    public:
    me(int m_,int n_):m(m_),n(n_){}
    friend void fun(me p);
};

void fun(me p){
    cout<<p.m<<" "<<p.n;
}

int main(){
    me z(2,3);
    fun(z);
}