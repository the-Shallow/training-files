#include<stdio.h>

// Check if a number is prime number or not

int is_prime(int num){

	if(num == 1) return 0;


	for(int i = 2;i<=num/2;i++){
		if(num % i == 0) return 0;
	}

	return 1;
}

void main(){
	int number;

	printf("Enter the value of number:");
	scanf("%d",&number);

	printf(is_prime(number) ? "\nThe given number is prime\n" : "\nThe given number is not prime\n");
}
