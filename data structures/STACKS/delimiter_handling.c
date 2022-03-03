#include<stdio.h>
#include<string.h>

char a[20],t=-1;

void push(char item){
    a[++t]=item;
}

char pop(){
    return a[t--];
}

int main(){
    char b[20],temp;
    int c=1;
    printf("enter the expression:");
    scanf("%s",b);
    for (int i=0;i<strlen(b);i++){
        if (b[i]=='[' || b[i]=='{' || b[i]=='('){
            push(b[i]);
        }
        else if(b[i]==']' || b[i]=='}' || b[i]==')'){
            if (b[i]==']'){
                temp=pop();
                if (temp!='['){
                    printf("the expression is incorrect in [");
                    c=0;
                    break;
                }
            }
            else if (b[i]=='}'){
                temp=pop();
                if (temp!='{'){
                    printf("the expression is incorrect in {");
                    c=0;
                    break;
                }
            }
            else if (b[i]==')'){
                temp=pop();
                if (temp!='('){
                    printf("the expression is incorrect in (");
                    c=0;
                    break;
                }
            }
        }
    }
    if (c==1){
        printf("the expression is correct");
    }
    return 0;
}