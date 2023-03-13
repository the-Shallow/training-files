#include<stdio.h>

void main(){

	int total = 0;

	while(1){
		int buy_price,sell_price , quantity;

		printf("\nEnter the buy_price:");
		scanf("%d",&buy_price);
		
		printf("\nEnter the sell price");
		scanf("%d",&sell_price);

		printf("\nEnter the quantity:");
		scanf("%d",&quantity);

		total += (( sell_price * quantity ) - ( buy_price * 			quantity )  );
		
		
		printf("\nDo you want to buy anything else?\n");
		int num;
		scanf("%d",&num);
		if(num == -1) break;
	}
	
	printf(total == 0 ? "\nThe persion is neither making profit nor loss\n"  : (total > 0 ? "\nThe person is making profit\n" : "\nThe person is under loss\n"  ) );
	printf("\nThe total is %d\n",total);

}
