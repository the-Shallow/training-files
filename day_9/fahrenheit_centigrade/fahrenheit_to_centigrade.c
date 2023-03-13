#include<stdio.h>

// Convert Fahrenheit to Centigrade

float get_centigrade( float fahrenheit ){

	return 0.555556 * ( fahrenheit - 32.00 );

}

void main(){
	float fahrenheit;

	printf("Enter the value of fahrenheit:");
	scanf("%f",&fahrenheit);

	printf("Centigrade value is %f\n",get_centigrade(fahrenheit));
}

