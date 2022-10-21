// #include <iostream>
// #include <list>
// #include <algorithm>
// #include <numeric>
// using namespace std;
// struct operation1{
// int operator() (int i, int j){ return i + j; }
// };
// int operation2 (int i, int j){ return i * j; }

// int main() {
// list<int> li1 {1, 2, 3 }; 
// list<int> li2 { 30, 20, 10 };
// cout<<"begin";
// int result =inner_product(li1.begin(), li2.end(), li2.end(), 1, operation1(), operation2);
// //LINE-1
// cout << result;
// return 0;
// }


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
char cArr []= { 'w', 'o', 'r', 'l', 'd' };  
int l= sizeof (cArr) / sizeof (*cArr); 
vector<char> cVec(1);
copy(cArr, cArr+1, cVec.begin());
// copy (cVec.begin(), cVec.end(), cArr);
// copy (cArr, cArr.end(), cVec.begin());
//LINE-1
for (vector<char>::iterator it = cVec.begin(); it != cVec.end(); ++it)
cout << *it;

//cout<<*it;
return 0;
}