#include<stdio.h>

// Convert Fahrenheit to Centigrade

void main(){
	float fahrenheit;

	printf("Enter the value of fahrenheit:");
	scanf("%f",&fahrenheit);

	float centigrade = 0.555556 * ( fahrenheit - 32.00 );

	printf("Centigrade value is %f\n",centigrade);
}

