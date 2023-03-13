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
	int number,count = 0;

	printf("Enter the value of number:");
	scanf("%d",&number);

	for(int i = 0;i<=number;i++){
		if( i == get_armstrong_number(i) ){
			printf("\nThe number %d is a armstrong number\n",i);
			count++;
		}
	}

	printf("\nThe number of armstrong number is %d\n",count);

	
}
