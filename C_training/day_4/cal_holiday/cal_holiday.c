#include<stdio.h>

// Calculate the number of holidays

void main(){
	int no_of_holiday,res = 8;

	printf("Enter the number of holidays:");
	scanf("%d",&no_of_holiday);
	if(no_of_holiday > 30) printf("\nInvalid input\n");
	else {
	for(int i = 0;i<no_of_holiday;i++){
		int date;
		printf("\nEnter the date:");
		scanf("%d",&date);
		if(date > 30) printf("\nInvalid Input\n");
		else { if( date % 7 != 6  && date % 7 != 0 ) res++; }
	}

	printf("\nThe total number of holidays are %d\n",res);
	}
}
