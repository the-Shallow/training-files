#include<stdio.h>

// Calculate the worker efficiency


void main(){

	int working_hours;

	printf("Enter the value of working hours:");
	scanf("%d",&working_hours);

	if( working_hours >= 2 && working_hours <= 3 ){
		printf("Highly Efficient\n");
	}else if( working_hours >= 3 && working_hours <= 4 ){
		printf("Improve Speed\n");
	}else if(working_hours >= 4 && working_hours <= 5 ){
		printf("Trainign to improve Speed\n");
	}else if( working_hours > 5 ) {
		printf("Leave the company\n");
	}

}
