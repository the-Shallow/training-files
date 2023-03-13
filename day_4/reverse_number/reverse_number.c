#include<stdio.h>

// Reverse the number

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

	printf("\nThe reverse number is %d\n",get_reverse(number));
}
