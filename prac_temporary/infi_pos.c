#include<stdio.h>
#include<string.h>

char a[20],cou=0;

void push(char c){
    if (cou>=20){
        printf("full");
    }
    else{
        a[cou++]=c;
    }
}

char pop(){
    if (cou<=0){
        return NULL;
    }
    else{
        return a[--cou];
    }
}

int  isop(char c){
    if (c=='*'||c=='/' || c=='^' || c=='+'|| c=='-'){
        return 1;
    }
    else{
        return 0;
    }
}

int prior(char c){
    if (c=='*'||c=='/'||c=='^'){
        return 2;
    }
    else if(c=='+'||c=='-'){
        return 1;
    }
}

int isempty(){
    if (cou==0){
        return 0;
    }
    return 1;
}

int main(){
    char b[20];
    char res[20],j=0;
    printf("Enter the expression:");
    scanf("%s",b);
    for(int i=0;i<strlen(b);i++){
        if (isop(b[i]) ){
            if (isempty()){
                int m1=prior(b[i]);
                int m2=prior(a[cou-1]);
                if (m2=='('){
                    push(b[i]);
                    continue;
                }
                if (m1>m2){
                    push(b[i]);
                }
                else{
                    //printf("%c",pop());
                    res[j++]=pop();
                    push(b[i]);
                }
            }
            else{
                push(b[i]);
            }
        }
        else if(b[i]=='('){
            push(b[i]);
        }
        else if(b[i]==')'){
            char x=pop();
            while(x!='('){
                
                    printf("%c",x);
                    res[j++]=x;
                    x=pop();
            }
            //pop();
        }
        else{
            res[j++]=b[i];
            printf("%c",b[i]);
        }
        //printf("for loop");
    }
    //printf("\n end of for loop");
    while(cou>=0){
        res[j]=pop();
        //printf("%c",pop());
        if (cou<=0){
            break;
        }
        else{
            j++;
        }
    }
    //printf("end of prgm");
    puts(res);
    return 0;
}