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
	int number,count = 0;

	printf("Enter the value of number:");
	scanf("%d",&number);
	
	for(int i = 1;i<=number;i++){
		if(is_prime(i)){
			printf("\nThe given number %d is prime\n",i);
			count++;
		}
	}
	printf("\nThe total prime numbers are: %d\n",count);;
}
