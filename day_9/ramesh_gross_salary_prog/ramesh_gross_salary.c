#include<stdio.h>

// Calculate Ramesh Gross Salary

float get_gross_salary( float basic_salary ){
	float da;
	float hra;

	da = 0.4*basic_salary;
	hra = 0.2*basic_salary;

	printf("-------------------------------");

	printf("\nDearness Allowance of ramesh is:%f",da);
	printf("\nHouse Rent Allowance of ramesh is:%f",hra);

	return basic_salary+hra+da;
}

void main(){
	float basic_salary;
	

	printf("\nEnter Ramesh Basic Salary:");
	scanf("%f",&basic_salary);


	printf("\nGross Salary of ramesh is:%f",get_gross_salary(basic_salary));

	printf("\n-------------------------------\n");
}
