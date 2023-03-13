#include<stdio.h>

int top1 = -1;
int top2 = 1000; 


int is_empty(int size){
	return top1 == -1 && top2 == size - 1 ;
}

int is_full(){
	return top1 == top2;
}

int pop1(int stack[],int size){

	if( is_empty(size) ) return 0;

	int element  = stack[top1--];
	return element;

}

int pop2(int stack[],int size){

	if( is_empty(size) ) return 0;

	int element  = stack[top2++];
	return element;

}

int push1(int stack[] , int element){
	if( is_full() ) return 0;
	
	stack[++top1] = element;
	return 1;
}

int push2(int stack[] , int element){
	if( is_full() ) return 0;
	
	stack[--top2] = element;
	return 1;
}




void display(int stack[] , int size ){
		
	for(int i = 0;i<=top1;i++) printf("%d ",stack[i]);
	for(int i = top2;i<size;i++) printf("%d " ,stack[i]);	
	printf("\n");
}

void main(){

	int size,choice;

	printf("Enter the size of the array:");
	scanf("%d",&size);
	top2 = size;
	int stack[size];

	while(1){

		printf("\n1.Insert an element in the stack 1\n");
		printf("\n2.Insert an element in the stack 2\n");
		printf("\n3.Pop an element from the stack 1\n");
		printf("\n4.Pop an element from the stack 2\n");
		printf("\n5.Display stack\n");

		printf("\nEnter you choice:\n");
	
		scanf("%d",&choice);

		switch(choice){
			case 1: {
					printf("\nEnter the value of element\n");
					int element;
					scanf("%d",&element);
					if( push1(stack,element) == 0 ) printf("\nStack is Full\n");
					else printf("\n%d is inserted into stack\n",element);
					break;
				}

			case 2: {
					printf("\nEnter the value of element\n");
					int element;
					scanf("%d",&element);
					if( push2(stack,element) == 0 ) printf("\nStack is Full\n");
					else printf("\n%d is inserted into stack\n",element);
					break;
				}

			case 3:{
					int element  = pop1(stack,size);
					if( element == 0 ) printf("\nStack is empty\n");
					else printf("\n%d is removed from stack\n",element);
					break;
				}

			case 4:{
					int element  = pop2(stack,size);
					if( element == 0 ) printf("\nStack is empty\n");
					else printf("\n%d is removed from stack\n",element);
					break;
				}

			case 5:{
					display(stack,size);
					break;
				}

		}

		printf("Do you want to continue?\n");
		char ch;
		scanf(" %c",&ch);
		if( ch == 'n' ) break;
	}

}
