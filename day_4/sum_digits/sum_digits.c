#include<stdio.h>

// Calculate the sum of digits

int get_sum(int num){
	int sum = 0;

	while(num > 0){
		sum += num % 10;
		num /= 10;
	}

	return sum;
}

void main(){

	int num;
	printf("Enter the value of number:");
	scanf("%d",&num);

	printf("\nThe sum of digits is %d\n",get_sum(num));
}
