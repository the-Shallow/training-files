#include<stdio.h>

// Calculate the number of currency notes required in 10,50,100 

void main(){
	int amount;

	printf("Enter the amount:");
	scanf("%d",&amount);

	printf("\n----------------------\n");
	printf("Number of currency notes in 100 required are:%d\n", amount/100 );
	printf("Number of currency notes in 50 required are:%d\n",(amount % 100) / 50 );
	printf("Number of currency notes in 10 required are:%d\n",((amount % 100)% 50) / 10   );

	printf("\n----------------------\n");
} 
