#include<stdio.h>

// Check if a number is happy number or not

int get_square_sum(int num){
	int sum = 0;

	while(num > 0){
		int last_digit = num % 10;
		sum += (last_digit * last_digit);
		num /= 10;
	}

	return sum;
}

int is_happy_number(int num){
	if(num == 1 || num == 7) return 1;

	while(num > 9){
		num = get_square_sum(num);

		if(num == 1) return 1;
	}

	return num == 7;
}

void main(){

	int number;

	printf("Enter the value of number:");
	scanf("%d",&number);

	printf(is_happy_number(number) ? "\nThe given number is happy number\n "  : "\nThe given number is not happy\n" );
}
