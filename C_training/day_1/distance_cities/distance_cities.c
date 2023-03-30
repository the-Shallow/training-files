#include<stdio.h>

// Convert Distance Between two cities into meters,inches,feet,cm

void main(){
	float distance;

	printf("Enter the distance between two cities:");
	scanf("%f",&distance);

	printf("\n-------------------------\n");
	printf("The Distance between two cities in inches is: %f\n",distance*39371.1);
	printf("The Distance between two cities in meters is: %f\n",distance*1000);
	printf("The Distance between two cities in feet is: %f\n",distance*3280.84);
	printf("The Distance between two cities in centimeter is: %f\n",distance*100000);

	printf("---------------------------\n");
}
