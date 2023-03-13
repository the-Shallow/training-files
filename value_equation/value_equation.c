#include<stdio.h>

// Calculate the value of the given equation

int my_pow(float number , int times){
	float res = 1.0;
	
	for(int i = 0;i<times;i++){
		res *= number;
	}

	return res;
}

void main(){
	float value_x,value_y;

	printf("Enter the value_x:\n");
	scanf("%f",&value_x);

	printf("Enter the value_y:\n");
	scanf("%f",&value_y);

	 
	printf("The value of the first equation is:%f\n", ( my_pow(value_x,3) + my_pow(value_x,2) + 2*value_x + 5 ) );

	printf("The value of the second equation is:%f\n",(my_pow(value_x,2) + my_pow(value_y,2) + 2*value_x*value_y - 10));
}

