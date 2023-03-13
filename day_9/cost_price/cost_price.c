#include<stdio.h>

// Calculate the cost price of one item

void main(){
	float selling_price,profit;

	printf("Enter the selling price of 15 items:");
	scanf("%f",&selling_price);

	printf("\nEnter the profit of 15 items:");
	scanf("%f",&profit);

	printf("\n The cost price of one item is: %f\n" , (selling_price - profit) / 15.0 );
}
