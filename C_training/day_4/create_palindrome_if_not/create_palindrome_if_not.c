#include<stdio.h>

// Create a palindrome if not

int is_palindrome(int number){
	int reverse = 0,temp = number;

	while(number > 0){
		int last_digit = number % 10;
		reverse = reverse* 10 + last_digit;
		number /= 10;
	}

	return temp == reverse ? 1 : 0; 
}

int create_palindrome_number(int number){
	int palindrome = number;
	number = number / 10;
	while(number > 0){
		int last_digit = number % 10;
		palindrome = palindrome * 10 + last_digit;
		number /= 10;
	}

	return palindrome;
}

void main(){
	int number;

	printf("Enter the value of number:");
	scanf("%d",&number);

	if(is_palindrome(number)) printf("\nThe given number is palindrome.\n");
	else {
		printf("\nThe palindrome for the given number is %d\n",create_palindrome_number(number));
	}	
}
