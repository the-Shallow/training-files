#include<stdio.h>

// Implement Arithmetic operations using switch statements

int get_ans(int num1 , int num2 , int op){
	switch(op){
		case 0:return num1 + num2;
		case 1:return num1 - num2;
		case 2:return num1 * num2;
		case 3:return num1 / num2;
	}

	return -1;
}

void main(){
	int num1,num2,op;

	printf("Enter the value of first number:");
	scanf("%d",&num1);

	printf("\nEnter the value of second number:");
	scanf("%d",&num2);

	printf("\nEnter the value of operation to be performed:");
	scanf("%d",&op);

	printf(" \nThe result is %d \n ", get_ans(num1,num2,op));
}
