// // void removeduplicates(struct node* head)           
// // {                                                  
// //     temp1=head;                                        
// //     while(temp1!=NULL&&temp1->next!=NULL)              
// //     {                                                  
// //         temp2=temp1;                                       
// //         while(temp2->next!=NULL)                           
// //         {                                                  
// //             if(temp1->expo==temp2->next->expo)                 
// //             {                                                  
// //                 temp1->coeff=temp1->coeff+temp2->next->coeff;     
// //                 temp1->expo=temp1->expo;                          
// //                 temp2->next=temp2->next->next;                    
// //             }                                                 
// //             else                                              
// //             {                                                 
// //                 temp2=temp2->next;                                
// //             }                                                 
// //         }                                                 
// //         temp1=temp1->next;                                
// //     }                                                 
// // }                                                 


// // #include<stdio.h>

// // int main(){
// //     int a[]={3,1,2,5,4,7},n=6,j,temp,gap;
// //     for (gap=n/2;gap>=0;gap/=2){
// //         for (int i=gap;i<n;i++){
// //             temp=a[i];
// //             for (j=i;j>=gap && a[j-gap]>temp;j-=gap){
// //                 a[j]=a[j-gap];
// //             }
// //             a[j]=temp;
// //         }
// //     }
// //     for (int i=0;i<n;i++){
// //         printf("%d ",a[i]);
// //     }
// // }


// // C program to convert infix expression to postfix
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// // Stack type
// struct Stack
// {
// 	int top;
// 	unsigned capacity;
// 	int* array;
// };

// // Stack Operations
// struct Stack* createStack( unsigned capacity )
// {
// 	struct Stack* stack = (struct Stack*)
// 		malloc(sizeof(struct Stack));

// 	if (!stack)
// 		return NULL;

// 	stack->top = -1;
// 	stack->capacity = capacity;

// 	stack->array = (int*) malloc(stack->capacity *
// 								sizeof(int));

// 	return stack;
// }
// int isEmpty(struct Stack* stack)
// {
// 	return stack->top == -1 ;
// }
// char peek(struct Stack* stack)
// {
// 	return stack->array[stack->top];
// }
// char pop(struct Stack* stack)
// {
// 	if (!isEmpty(stack))
// 		return stack->array[stack->top--] ;
// 	return '$';
// }
// void push(struct Stack* stack, char op)
// {
// 	stack->array[++stack->top] = op;
// }


// // A utility function to check if
// // the given character is operand
// int isOperand(char ch)
// {
// 	return (ch >= 'a' && ch <= 'z') ||
// 		(ch >= 'A' && ch <= 'Z');
// }

// // A utility function to return
// // precedence of a given operator
// // Higher returned value means
// // higher precedence
// int Prec(char ch)
// {
// 	switch (ch)
// 	{
// 	case '+':
// 	case '-':
// 		return 1;

// 	case '*':
// 	case '/':
// 		return 2;

// 	case '^':
// 		return 3;
// 	}
// 	return -1;
// }


// // The main function that
// // converts given infix expression
// // to postfix expression.
// int infixToPostfix(char* exp)
// {
// 	int i, k;

// 	// Create a stack of capacity
// 	// equal to expression size
// 	struct Stack* stack = createStack(strlen(exp));
// 	if(!stack) // See if stack was created successfully
// 		return -1 ;

// 	for (i = 0, k = -1; exp[i]; ++i)
// 	{
		
// 		// If the scanned character is
// 		// an operand, add it to output.
// 		if (isOperand(exp[i]))
// 			exp[++k] = exp[i];
		
// 		// If the scanned character is an
// 		// ‘(‘, push it to the stack.
// 		else if (exp[i] == '(')
// 			push(stack, exp[i]);
		
// 		// If the scanned character is an ‘)’,
// 		// pop and output from the stack
// 		// until an ‘(‘ is encountered.
// 		else if (exp[i] == ')')
// 		{
// 			while (!isEmpty(stack) && peek(stack) != '(')
// 				exp[++k] = pop(stack);
// 			if (!isEmpty(stack) && peek(stack) != '(')
// 				return -1; // invalid expression			
// 			else
// 				pop(stack);
// 		}
// 		else // an operator is encountered
// 		{
// 			while (!isEmpty(stack) &&
// 				Prec(exp[i]) <= Prec(peek(stack)))
// 				exp[++k] = pop(stack);
// 			push(stack, exp[i]);
// 		}

// 	}

// 	// pop all the operators from the stack
// 	while (!isEmpty(stack))
// 		exp[++k] = pop(stack );

// 	exp[++k] = '\0';
// 	printf( "%s", exp );
// }

// // Driver program to test above functions
// int main()
// {
// 	char exp[] = "a+b*(c^d-e)^(f+g*h)-i";
// 	infixToPostfix(exp);
// 	return 0;
// }




// #include <stdio.h>

// // int arr[10];



// void merge(int a[],int l,int m,int h){
// 	int l1=m-l+1;
// 	int l2=h-m;
// 	int a1[l1],a2[l2];

// 	for (int i=0;i<l1;i++){
// 		a1[i]=a[l+i];
// 	}
// 	for (int i=0;i<l2;i++){
// 		a2[i]=a[m+1+i];
// 	}

// 	int i=0,j=0,k=l;
	
// 	while(i<l1 && j<l2){
// 		if (a1[i]<a2[j]){
// 			a[k++]=a1[i++];
// 		}
// 		else{
// 			a[k++]=a2[j++];
// 		}

// 	}

// 	while(i<l1){
// 		a[k++]=a1[i++];
// 	}
// 	while(j<l2){
// 		a[k++]=a2[j++];
// 	}



// 	for (int i=0;i<9;i++){
// 		printf("%d ",a[i]);
// 	}
// 	printf("\n");

// }

// void mergesort(int a[],int low,int high){
// 	if (low< high){
// 		int mid=(low+high)/2;
// 		mergesort(a,low,mid);
// 		mergesort(a,mid+1,high);
// 		merge(a,low,mid,high);
// 	}
// }


// int main(){
// 	int a[]={4,1,2,3,6,5,7,10,8};
// 	for (int i=0;i<9;i++){
// 		printf("%d ",a[i]);
// 	}

// 	mergesort(a,0,9);
// 	printf("\n sorted array:\n");
// 	for (int i=0;i<9;i++){
// 		printf("%d ",a[i]);
// 	}

// }


#include<stdio.h>
#include<stdlib.h>

struct node{
	int val;
	struct node *next;
}*temp,*t;



void create(struct node *head){
	int le,n;
	printf("enter the no of elements:");
	scanf("%d",&le);
	
	for (int i=0;i<le;i++){
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter the element:");
		scanf("%d",&n);
		temp->val=n;
		temp->next=NULL;
		head->next=temp;
		head=temp;
	}
	
}


void disp(struct node *p){
	t=p;
	while(t!=NULL){
		printf("%d ",t->val);
		t=t->next;
	}
	printf("\n");
}



int main(){

	// struct node *h1=NULL;
	// // struct node *t1=NULL;
	// struct node *h2=NULL;
	// // struct node *t2=NULL;

	// struct node* a[10];
	
	// int n,l;
	// h1=(struct node*)malloc(sizeof(struct node));
	// h1->val=-1;
	// h1->next=NULL;
	// // t1=h1;
	// h2=(struct node*)malloc(sizeof(struct node));
	// h2->val=-1;
	// h2->next=NULL;
	// // t2=h2;
	// create(h1);
	// create(h2);
	// a[0]=h1->next;
	// a[1]=h2->next;
	// for (int i=0;i<2;i++){
	// 	disp(a[i]);
	// }
	// printf("%d",5/2);
	int a=10,b=20;
	swap(&a,&b);
	printf("%d %d",a,b);
}

void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}