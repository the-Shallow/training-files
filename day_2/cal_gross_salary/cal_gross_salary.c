#include<stdio.h>


// Calculate Gross Salary


void main(){

	float basic_salary;

	printf("Enter the value of basic Salary:");
	scanf("%f",&basic_salary);
	float hra,da;
	if( basic_salary < 1500.00 ){
		hra = 0.1*basic_salary;
		da = 0.9*basic_salary;
	}else {
		hra = 500.00;
		da = 0.98 * basic_salary;
	}

	printf("The total gross salary is %f\n",hra+da);
}
