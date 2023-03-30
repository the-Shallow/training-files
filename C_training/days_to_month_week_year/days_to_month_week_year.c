#include<stdio.h>

// Convert days to month,week,year

int get_year(int days){
	return days/365;
}

int get_month(int days){
	return days/30;
}

int get_weeks(int days){
	return days/7;
}

void main(){
	int days;

	printf("Enter the days:\n");
	scanf("%d",&days);

	printf("\n----------------------------\n");
	
	printf("Number of years in given days:%d\n",get_year(days));
	printf("Number of month in given days:%d\n",get_month(days));
	printf("Number of weeks in given days is:%d\n",get_weeks(days));

	printf("\n----------------------------\n");
}
