// #include<iostream>

// using namespace std;

// struct comp{
//   int re,im;
// };

// int operator + (comp a,comp b){
//   // comp res;
//   // res.re=d1.re+d2.re;
//   // res.im=d1.im+d2.im;
// }



// int main(){
//   comp d1,d2,d;
//   cout<<"enter the values for d1 : ";
//   cin>>d1.re>>d1.im;
//   cout<<"Enter the values for d2 : ";
//   cin>>d2.re>>d2.im;
//   // d= (d1+d2);
//   int m=2+3;
//   cout<<d.re<<"+i"<<d.im;
// }



// #include<iostream>

// using namespace std;

// class complex{
//   public:

//   int re,im;
//   complex(int r=0,int i=0):re(r),im(i){}

//   void disp(){
//     cout<<re<<"+i*"<<im<<endl;
//   }

// };

// complex operator + (complex &a,complex &b){
//   complex m;
//   m.re=a.re+b.re;
//   m.im=a.im+b.im;
//   return m;
// }

// complex operator+ (complex &a,int m){
//   return complex(a.re+m,a.im);
// }



// int main(){
//   complex d1,d2;
//   cout<<"enter the values for d1 : ";
//   cin>>d1.re>>d1.im;
//   d1.disp();
//   d1=d1+5;
//   d1.disp();
// }



#include<iostream>

using namespace std;

class complex{
  public:
  int re,im;
  complex(int r=0,int i=0):re(r),im(i){}

  void disp(){
    cout<<re<<"+i*"<<im<<endl;

  }
}a,b;

complex operator +(complex a,complex b){
  complex r;
  r.re=a.re+b.re;
  r.im=a.im+b.im;
  return r;
}

complex operator -(complex a,complex b){
  complex r;
  r.re=a.re-b.re;
  r.im=a.im-b.im;
  return r;
}

complex operator +(complex a,int b){
  complex r;
  r.re=a.re+b;
  r.im=a.im;
  return r;
}

int main(){
  cout<<2;
  // cout<<"Enter the complex number A : ";
  // cin>>a.re>>a.im;
  // cout<<"Enter the complex number B : ";
  // cin>>b.re>>b.im;
  // complex res;
  // res=a+b;
  // res.disp();
  
}