#include<stdio.h>

// Convert height in feet to inches,meter,cm

void main(){
	float height;

	printf("Enter the value of height:");
	scanf("%f",&height);

	printf("\n---------------------------\n");

	printf("Height in inches:%f\n",height*12.000);
	printf("Height in meter:%f\n",height/3.2808);
	printf("Height in centimeter:%f\n",height*30.48);

	printf("\n----------------------------\n");
}
