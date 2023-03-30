#include<stdio.h>

// Calculate library fine


int get_fine(int late_days,int book_price){
	if(late_days <= 5){
		return 5*late_days;
	}else if(late_days >= 6 && late_days <= 10){
		return 25 + (late_days-5)*10;
	}else if(late_days > 10 && late_days <= 30){
		return 5*5 + 5*10 + (late_days - 10)*20;
	}else if(late_days > 30){
		int fine = 5*5 + 5*10 + (late_days - 10)* 20; 
		return  fine > book_price ? fine : book_price ;
	}

	return 0;
	
}


void main(){
	int late_days,book_price;
	
	printf("Enter the number of days the student is late to return the book:");

	scanf("%d",&late_days);

	printf("\nEnter the price of the book:");
	scanf("%d",&book_price);

	int fine = get_fine(late_days,book_price);

	printf("\nThe fine is %d\n",fine);
}
