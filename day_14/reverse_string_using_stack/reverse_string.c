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

char pop(char stack[]){

	if( is_empty() ) return '\0';

	char element  = stack[top--];
	return element;

}


void display(char stack[] ){
		
	for(int i = 0;i<=top;i++) printf("%c ",stack[i]);
	printf("\n");
}

void main(){

	char str[] = "Hello this is a string";
	//char str1[50];
	char stack[strlen(str)];
	for(int i = 0;i<strlen(str);i++) push( stack,str[i] , strlen(str) );

	//display(stack);
	//*(str+0) = pop(stack);
	for(int i = 0;i<strlen(str);i++) str[i] = pop(stack);

	printf("\n%s\n",str);

}
