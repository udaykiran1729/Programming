/*#include<stdio.h>
#include<string.h>
int a[10];

int top=-1;

int isoparand(char c){
    if (c>=97 && c<=122){
        return 1;
    }
    else{
        return 0;
    }
}

int isoperator(char c){
    if (c=='+'||c=='-'||c=='*'||c=='/'||c=='^'){
        return 1;
    }
    else{
        return 0;
    }
}

int precedence(char c){
    if (c=='*'||c=='/'||c=='^'){
        return 2;
    }
    else if(c=='+'|| c=='-'){
        return 1;
    }
}

void push(int item){

    if (top>10){
        printf("stack overflow");
    }

    else{
        top=top+1;
        a[top]=item;
    }
}


int pop(){
    //top+=1;   //incrementing top to get the top of the stack//
    if (top<0){
        //printf("stack underflow");
        return -1;
    }
    else{
        top=top-1;
        return a[top];
        //printf("%d\n",a[top]);
        
        
    }
}


void disp(){
    for (int i=0;i<=top;i++){
        printf("%d\n",a[i]);
    }
}


int main(){
    /*printf("enter the no of elements:");
    int n,b;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        printf("enter the element");
        scanf("%d",&b);
        push(b);
    }
    printf("ELEMENTS IN THE STACK BEFORE POPING:\n");
    disp();
    printf("enter the no of elements to be poped:");
    scanf("%d",&n);

    for (int i=0;i<n;i++){
        pop();
    }
    /*printf("ELEMENTS AFTER POPING:/n");
    disp();
    char e[10];
    printf("enter the infix expression:");
    gets(e);
    //puts(e);
    int l=strlen(e);
    for (int i=0;i<l;i++){
        if (isoparand(e[i])){
            printf("%c",e[i]);
        }
        else if (isoperator(e[i])){
            char low=pop();
            int m=precedence(e[i]);
            int n=precedence(low);
            if (m>n){

                push(e[i]);
            }
            else{
                push(e[i]);
                printf("%c",low);
            }
        }
        else if(e[i]=='('){
            push('(');
        }
        else if(e[i]==')'){
            for (char i=a[top];i!='(';i++){
                printf("%c")
            }
        }
    }
    return 0;
}*/

#include<stdio.h>
#include<string.h>

char a[30];

int top=-1;

void push(char item){
        if (top>30){
                printf("STAK OVERFLOW");
        }
        else{
                //top=top+1;
                a[++top]=item;
        }
}

char pop(){

        if (top<0){
                //printf("STACK UNDERFLOW");
                return -1;
        }
        else{
                //top=top-1;
                //printf("%d",a[top]);
                return a[top--];
        }
}

int isopran(char c){
        if (c>=97 && c<=123){
                return 1;
        }
        else{
                return 0;
        }
}

int isopere(char c){
        if (c=='*'||c=='/'||c=='+'||c=='-'||c=='^'){
                return 1;
        }
        else{
                return 0;
        }
}

int preced(char c){
        if (c=='*'||c=='^'||c=='/'){
                return 2;
        }
        else if(c=='+'||c=='-'){
                return 1;
        }
        else{
                return 0;
        }
}

int main(){
        printf("enter the infix expression:");
        char ch[20];
        scanf("%s",ch);
        //ch='('+ch+')'
        int len=strlen(ch);
        //printf("%d",len);
        //push('(');
        for (int i=0;i<len;i++){
                if (isopran(ch[i])){
                        printf("%c",ch[i]);
                }
                else if (ch[i]=='('){
                        push(ch[i]);
                }
                else if(isopere(ch[i])){
                        if (top==0){
                                //printf("in the else-if-2 if cond");
                                push(ch[i]);
                        }
                        else{
                                //printf("in the else-if-2 else cond");
                                //char temp=pop();
                                int m1=preced(ch[i]);
                                int m2=preced(a[top-1]);
                                if (m1>m2){
                                        //printf("in the else-if-2 else(ifcond)\n");
                                        //push(temp);
                                        push(ch[i]);
                                }
                                else{
                                        //printf("m1<m2\n");
                                        printf("%c",pop());
                                        push(ch[i]);
                                }
                        }

                }
                else if(ch[i]==')'){
                        char x=pop();
                        while(x!='('){
                                printf("%c",x);
                                x=pop();
                        }
                        //x=pop();
                }
        }
        //printf("\n\n\n");
        if(top>=0){
        while(top>=0){
                printf("%c",a[top]);
                top--;
        }
        }



        return 0;
}