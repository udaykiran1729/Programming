// void removeduplicates(struct node* head)           
// {                                                  
//     temp1=head;                                        
//     while(temp1!=NULL&&temp1->next!=NULL)              
//     {                                                  
//         temp2=temp1;                                       
//         while(temp2->next!=NULL)                           
//         {                                                  
//             if(temp1->expo==temp2->next->expo)                 
//             {                                                  
//                 temp1->coeff=temp1->coeff+temp2->next->coeff;     
//                 temp1->expo=temp1->expo;                          
//                 temp2->next=temp2->next->next;                    
//             }                                                 
//             else                                              
//             {                                                 
//                 temp2=temp2->next;                                
//             }                                                 
//         }                                                 
//         temp1=temp1->next;                                
//     }                                                 
// }                                                 


// #include<stdio.h>

// int main(){
//     int a[]={3,1,2,5,4,7},n=6,j,temp,gap;
//     for (gap=n/2;gap>=0;gap/=2){
//         for (int i=gap;i<n;i++){
//             temp=a[i];
//             for (j=i;j>=gap && a[j-gap]>temp;j-=gap){
//                 a[j]=a[j-gap];
//             }
//             a[j]=temp;
//         }
//     }
//     for (int i=0;i<n;i++){
//         printf("%d ",a[i]);
//     }
// }


// C program to convert infix expression to postfix
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Stack type
struct Stack
{
	int top;
	unsigned capacity;
	int* array;
};

// Stack Operations
struct Stack* createStack( unsigned capacity )
{
	struct Stack* stack = (struct Stack*)
		malloc(sizeof(struct Stack));

	if (!stack)
		return NULL;

	stack->top = -1;
	stack->capacity = capacity;

	stack->array = (int*) malloc(stack->capacity *
								sizeof(int));

	return stack;
}
int isEmpty(struct Stack* stack)
{
	return stack->top == -1 ;
}
char peek(struct Stack* stack)
{
	return stack->array[stack->top];
}
char pop(struct Stack* stack)
{
	if (!isEmpty(stack))
		return stack->array[stack->top--] ;
	return '$';
}
void push(struct Stack* stack, char op)
{
	stack->array[++stack->top] = op;
}


// A utility function to check if
// the given character is operand
int isOperand(char ch)
{
	return (ch >= 'a' && ch <= 'z') ||
		(ch >= 'A' && ch <= 'Z');
}

// A utility function to return
// precedence of a given operator
// Higher returned value means
// higher precedence
int Prec(char ch)
{
	switch (ch)
	{
	case '+':
	case '-':
		return 1;

	case '*':
	case '/':
		return 2;

	case '^':
		return 3;
	}
	return -1;
}


// The main function that
// converts given infix expression
// to postfix expression.
int infixToPostfix(char* exp)
{
	int i, k;

	// Create a stack of capacity
	// equal to expression size
	struct Stack* stack = createStack(strlen(exp));
	if(!stack) // See if stack was created successfully
		return -1 ;

	for (i = 0, k = -1; exp[i]; ++i)
	{
		
		// If the scanned character is
		// an operand, add it to output.
		if (isOperand(exp[i]))
			exp[++k] = exp[i];
		
		// If the scanned character is an
		// ‘(‘, push it to the stack.
		else if (exp[i] == '(')
			push(stack, exp[i]);
		
		// If the scanned character is an ‘)’,
		// pop and output from the stack
		// until an ‘(‘ is encountered.
		else if (exp[i] == ')')
		{
			while (!isEmpty(stack) && peek(stack) != '(')
				exp[++k] = pop(stack);
			if (!isEmpty(stack) && peek(stack) != '(')
				return -1; // invalid expression			
			else
				pop(stack);
		}
		else // an operator is encountered
		{
			while (!isEmpty(stack) &&
				Prec(exp[i]) <= Prec(peek(stack)))
				exp[++k] = pop(stack);
			push(stack, exp[i]);
		}

	}

	// pop all the operators from the stack
	while (!isEmpty(stack))
		exp[++k] = pop(stack );

	exp[++k] = '\0';
	printf( "%s", exp );
}

// Driver program to test above functions
int main()
{
	char exp[] = "a+b*(c^d-e)^(f+g*h)-i";
	infixToPostfix(exp);
	return 0;
}
