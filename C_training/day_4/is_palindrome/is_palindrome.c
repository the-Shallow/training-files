#include<stdio.h>

// Check if the number is palindrome

int get_reverse(int num){
	int reverse = 0;

	while(num > 0 ){
		int last_digit = num % 10;
		reverse = reverse* 10 + last_digit;
		num /= 10;
	}

	return reverse;
}

void main(){
	int number;

	printf("Enter the value of number:");
	scanf("%d",&number);

	printf(number == get_reverse(number) ? "\nThe given number is palindrome\n" : "\nThe given number is not palindrome\n");
}
