#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int top = -1;


int is_empty(){
	return top == -1;
}

int is_full(int size){
	return top == size - 1;
}

char pop(char* stack){

	if( is_empty() ) return 0;

	char element  = stack[top--];
	return element;

}

int push(char* stack , char element,int size){
	if( is_full(size) ) return 0;
	if(element == ' ') return 0;
	stack[++top] = element;
	return 1;
}

char peek(char* stack){

	return stack[top];
}

int priority(char ch){

	switch(ch){
		case '+':
		case '-':return 1;

		case '*':
		case '/': return 2;

		default:return 0;
	}

}

int eval( char ch1 , char ch2 ){
	return priority(ch1) >= priority(ch2); 
}

char* infix_to_postfix(char* expr){
	int size = strlen(expr) + 10;
	char stack[size];
	top = -1;

	char* res = (char*) malloc(sizeof(expr));
	int k = 0;

	for(int i = 0;i<strlen(expr);i++){
		char ch = expr[i];
		if(ch == ' ') continue;
		if(ch >= '0' && ch <= '9'){
			res[k++] = ch;		
		}
		else if( ch == '(' ){
			push( stack,ch,size );
		}else if(ch == ')'){
			while( !is_empty(stack) && peek(stack) != '(' ) res[k++] = pop(stack);
			pop(stack);
		}else {
			while( !is_empty() &&  eval(peek(stack),ch) ){
				res[k++] = pop(stack);
			}
			
			push(stack,ch,size);
		}
	}

	while(!is_empty()) {
		char ch = pop(stack);
		if(ch == ' ') continue;
		res[k++] = ch;
	}

	return res;

}

int result(char* stack,char ch){

	int op2 = pop(stack) - '0';
	int op1 = pop(stack) - '0';

	printf("op == %c\n",ch);
	printf("op1 == %d\n",op1);
	printf("op2 == %d\n",op2);

	switch(ch){
		case '+':return op1 + op2;
		case '-':return op1 - op2;
		case '*':return op1 * op2;
		case '/':return op1 / op2;
	}
}

int evaluate(char* expr){

	int res = 0;
	
	int size = strlen(expr) + 10;
	char stack[size];
	top = -1;

	for(int i = 0;i<strlen(expr);i++){
		char ch = expr[i];
		if(ch >= '0' && ch <= '9'){
			push(stack,ch,size);
		}else if(ch == '+' || ch == '-' || ch == '*' || ch == '/') {
			res = result(stack,ch);
			
			push(stack,res+'0',size);
		}
	}

	return pop(stack) - '0';
}



void display(int stack[] ){
		
	for(int i = 0;i<=top;i++) printf("%d ",stack[i]);
	printf("\n");
}

void main(){

	char expr[1000];
	strncpy(expr,"",1000);

	printf("\nEnter the expression:\n");
	fgets(expr,1000,stdin);

	printf("%s",expr);

	char* postfix = infix_to_postfix(expr); 

	printf("Postfix = %s\n",postfix);

	int res = evaluate(postfix);
	
	printf("\nThe Result of the expression is %d\n",res);

}
