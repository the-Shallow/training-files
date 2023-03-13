#include<stdio.h>

// Calculate the sum of first and last digit of a number


int sum(int number){

	int first = number / 1000;
	int last = number % 10;

	return first + last;
}

void main(){
	int number;

	printf("Enter the value of number:");
	scanf("%d",&number);


	printf("The sum of first and last digit of a 4-digit number is %d\n",sum(number));
}
