#include<stdio.h>

int top = -1;


int is_empty(){
	return top == -1;
}

int is_full(int size){
	return top == size - 1;
}

int push(int stack[] , int element,int size){
	if( is_full(size) ) return 0;

	stack[++top] = element;
	return 1;
}

int pop(int stack[]){

	if( is_empty() ) return 0;

	int element  = stack[top--];
	return element;

}

int insert_bottom(int stack[] , int element,int size){
 if( is_full(size) ) return 0;
 

 if( is_empty() ){
	push(stack,element,size);
	return 1;
 }

  int curr = pop(stack);
  insert_bottom(stack,element,size);
  push(stack,curr,size); 
  return 1;
}


int reverse(int stack[] ,int size){
 if( is_empty() ) return -1;

  int curr = pop(stack);
  reverse(stack,size);
  insert_bottom(stack,curr,size); 
  return 1;
}


void display(int stack[] ){
		
	for(int i = 0;i<=top;i++) printf("%d ",stack[i]);
	printf("\n");
}

void main(){

	int size,choice;

	printf("Enter the size of the array:");
	scanf("%d",&size);

	int stack[size];

	while(1){

		printf("\n1.Insert an element in the stack\n");
		printf("\n2.Pop an element from the stack\n");
		printf("\n3.Display stack\n");
		printf("\n4.Reverse Stack\n");

		printf("\nEnter you choice:\n");
	
		scanf("%d",&choice);

		switch(choice){
			case 1: {
					printf("\nEnter the value of element\n");
					int element;
					scanf("%d",&element);
					if( push(stack,element,size) == 0 ) printf("\nStack is Full\n");
					else printf("\n%d is inserted into stack\n",element);
					break;
				}

			case 2:{
					int element  = pop(stack);
					if( element == 0 ) printf("\nStack is empty\n");
					else printf("\n%d is removed from stack\n",element);
					break;
				}

			case 3:{
					display(stack);
					break;
				}

			case 4:{
				if(reverse(stack,size) == 0) printf("\nStack is Empty\n");
				else printf("\nStack is Reversed\n");
				break;
			}
		}

		printf("Do you want to continue?\n");
		char ch;
		scanf(" %c",&ch);
		if( ch == 'n' ) break;
	}

}
