#include<iostream>
#include<string>
using namespace std;
main()
{
    string m="Hello World";
    //m.resize(5);
    //m.shrink_to_fit();
    m.copy("Hello",5,0);
    cout<<m;
    return 0;
}