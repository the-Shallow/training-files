#include<stdio.h>

// Calculate the sum of first and last digit of a number

void main(){
	int number;

	printf("Enter the value of number:");
	scanf("%d",&number);

	int first = number / 1000;
	int last = number % 10;

	printf("The sum of first and last digit of a 4-digit number is %d\n",first+last);
}
