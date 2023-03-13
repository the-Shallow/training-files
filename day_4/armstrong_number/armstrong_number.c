#include<stdio.h>

// Calculate the armstrong number

int get_armstrong_number(int num){
	int sum = 0;

	while(num > 0){
		int last_digit = num % 10;
		sum += (last_digit * last_digit * last_digit);
		num /= 10;
	}

	return sum;
}

void main(){
	int number;

	printf("Enter the value of number:");
	scanf("%d",&number);

	printf(get_armstrong_number(number) == number ? "\nThe given number is armstrong number\n" : "\nThe given number is not armstrong number\n" );
}
