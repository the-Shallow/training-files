#include<stdio.h>

// Calculate factorial of the number

int factorial(int num){
	int res = 1;

	while(num > 0){
		res *= num;
		num--;
	}

	return res;
}

void main(){

	int num;

	printf("Enter the value of number:");
	scanf("%d",&num);

	printf("\nThe Factorial of the number is %d\n",factorial(num));	
}
