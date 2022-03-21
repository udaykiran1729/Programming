#include<stdio.h>
#include<string.h>

double a[20];
int c=0;

void push(double item){
    a[c++]=item;
}

double pop(){
    return a[--c];
}


int ope(char ch){
    if (ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^'){
        return 1;
    }
    else{return 0;}
}

int main(){
    char b[20];
    printf("enter the expression:");
    scanf("%s",b);
    for (int i=0;i<strlen(b);i++){
        if (ope(b[i])){
            double m1=pop();
            double m2=pop();
            switch(b[i]){
                case '+':push(m1+m2);break;
                case '-':push(m2-m1);break;
                case '*':push(m1*m2);break;
                case '/':push(m2/m1);break;
                //case '^':push(m2^m1);break;
            }
        }
        else{
            push(b[i]-'0');
        }
    }
    for (int i=0;i<6;i++){
        printf("%d",a[i]);
    }
    printf("\n%1f",a[0]);
    printf("\n %1f",pop());
    return 0;
}