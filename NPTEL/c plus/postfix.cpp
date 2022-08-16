#include<iostream>
#include<string>
#include<stack>

using namespace std;

bool ope(char c){
    if (c=='+' || c=='-' || c=='*' || c=='/'){
        // cout<<"true";
        return true;
    }
    return false;
}

int main(){
    stack<int> s;
    int m,n;
    string st;
    cout<<"enter the expression: ";
    cin>>st;
    cout<<st<<endl;
    for (int i=0;i<st.size();i++){
        //cout<<i;
        if (ope(st[i])){
            m=s.top();
            s.pop();
            n=s.top();
            s.pop();
            //cout<<m+n<<endl;
            s.push(m+n);
        }
        else{
            s.push(st[i]-'0'); 
        }
    }
    cout<<"the resultant value is: "<<s.top();
}