#include<stdio.h>

// Sum,Subtraction,Multiplication , Division of two number

int add(int a , int b){
	return a+b;
}

int multiply(int a , int b) {
	return a*b;
}

int subtract(int a ,int b) {
	return a - b;
}

int division(int a ,int b) {
	return a/b;
}


void main(){
	int num1,num2;

	printf("Enter first number:");
	scanf("%d" , &num1);
	printf("-------------------");
	printf("Enter second number:");
	scanf("%d",&num2);

	printf("Addition of %d and %d is %d\n",num1,num2,add(num1,num2));
	printf("Subtraction of %d and %d is %d\n",num1,num2,subtract(num1,num2));
	printf("Multiplication of %d and %d is %d\
n",num1,num2,multiply(num1,num2));
	printf("Division of %d and %d is %d",num1,num2,division(num1,num2));	
} 
