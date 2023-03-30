#include<stdio.h>
#include<string.h>

int top = -1;


int is_empty(){
	return top == -1;
}

int is_full(int size){
	return top == size - 1;
}

int push(char stack[] , char element,int size){
	if( is_full(size) ) return 0;

	stack[++top] = element;
	return 1;
}

int pop(char stack[],char curr){

	if( is_empty() ) return 0;
	if( curr == ')' && stack[top] != '(') return 0;
	if( curr == '}' && stack[top] != '{' ) return 0;
	if( curr == ']' && stack[top] != '[') return 0;
	stack[top--];
	return 1;
}


void display(char stack[] ){
		
	for(int i = 0;i<=top;i++) printf("%c ",stack[i]);
	printf("\n");
}

void main(){

	char str[] = "({[]})";
	//char str1[50];
	char stack[strlen(str)];

	//display(stack);
	//*(str+0) = pop(stack);
	for(int i = 0;i<strlen(str);i++) {
		char ch = str[i];		
		if( ch == '(' || ch == '{' || ch == '[' ) push( stack,str[i] , strlen(str) );
		else pop(stack,ch);
	}

	is_empty() ? printf("\nStrings are perfectly balanced\n") : printf("\nStrings are not perfectly balanced\n");

}
