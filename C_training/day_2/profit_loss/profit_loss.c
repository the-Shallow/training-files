#include<stdio.h>

// Caluclate profit or loss


void main(){

	int cost_price,sell_price;

	printf("Enter the cost price:\n");
	scanf("%d",&cost_price);
	
	printf("Enter the selling price:\n");
	scanf("%d",&sell_price);
	
	int val = sell_price - cost_price;
	if( val < 0 ){
		printf("Seller has incurred a loss of %d\n",val);
		return;
	}else if( val > 0 ) {
		printf("Seller has made a profit of %d\n",val);
		return;
	}

	printf("Seller has neither made profit nor any loss\n");

}
