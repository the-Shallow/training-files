#include<stdio.h>

int get_price( int item_code , int quantity ){
		switch(item_code){
			case 101:return  quantity*150;
			case 102:return quantity*200;
		
			case 103:return quantity*30;
				
			case 104:return  quantity*100;
				
		}
}


void main(){

	int bill = 0;

	while(1){
		int item_code,quantity;

		printf("\nEnter the item code:");
		scanf("%d",&item_code);
		

		printf("\nEnter the quantity:");
		scanf("%d",&quantity);

		bill += get_price(item_code,quantity);
		
		
		printf("\nDo you want to buy anything else?\n");
		int num;
		scanf("%d",&num);
		if(num == -1) break;
	}

	printf("\nThe total bill is %d\n",bill);

}
