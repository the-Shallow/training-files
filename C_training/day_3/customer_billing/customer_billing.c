#include<stdio.h>

void main(){

	int bill = 0;

	while(1){
		int item_code,quantity;

		printf("\nEnter the item code:");
		scanf("%d",&item_code);
		

		printf("\nEnter the quantity:");
		scanf("%d",&quantity);

		switch(item_code){
			case 101:bill += quantity*150;
				 break;
			case 102:bill += quantity*200;
				break;
			case 103:bill += quantity*30;
				break;
			case 104:bill += quantity*100;
				break;
		}
		
		
		printf("\nDo you want to buy anything else?\n");
		int num;
		scanf("%d",&num);
		if(num == -1) break;
	}

	printf("\nThe total bill is %d\n",bill);

}
