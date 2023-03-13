#include<stdio.h>

// Convert days to months

void main(){
	int in_days;

	printf("Enter days:");
	scanf("%d",&in_days);

	int months = in_days/30;
	int days = in_days % 30;

	printf("\nNumber of months and days in given input is:%d months and %d days\n",months,days);
}
