#include<stdio.h>

// Calculate the total price of ordered items

void main(){
	int burger_quantity,pizza_quantity,sandwitch_quantity;
	float burger_price,pizza_price,sandwitch_price;

	printf("Enter the quantity of burger:");
	scanf("%d",&burger_quantity);

	printf("\nEnter the quantity of pizza:");
	scanf("%d",&pizza_quantity);

	printf("\nEnter the quantity of sandwitch:");
	scanf("%d",&sandwitch_quantity);

	if(burger_quantity <= 0 || pizza_quantity <= 0 || sandwitch_quantity <= 	0) {
		printf("Invalid entries");
		return;
	}

	burger_price = burger_quantity * 150.00;
	pizza_price = pizza_quantity * 300.00;
	sandwitch_price = sandwitch_quantity * 100.00;

	if(burger_quantity > 5){
		burger_price = 0.9*burger_price;
	}

	if( pizza_quantity > 3 ){
		pizza_price = 0.85*pizza_price;
	}

	if(sandwitch_quantity > 5){
		sandwitch_price = 0.8*sandwitch_price;
	}

	float total_price = burger_price + pizza_price + sandwitch_price;
	total_price += 0.12*total_price;
	printf("\nThe total price is %f\n",total_price);

	
}
