#include<stdio.h>

// Calculate total expenses

void main(){
	int quantity , price;

	printf("Enter the value of quantity:");
	scanf("%d",&quantity);

	printf("Enter the value of price per item:");
	scanf("%d",&price);
	int total_price = quantity * price;

	if( quantity > 1000 ) total_price -= 0.1*total_price;

	printf("Total price is %d\n",total_price);
}
