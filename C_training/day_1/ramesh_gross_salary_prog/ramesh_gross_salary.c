#include<stdio.h>

// Calculate Ramesh Gross Salary

void main(){
	float basic_salary;
	float da;
	float hra;

	printf("\nEnter Ramesh Basic Salary:");
	scanf("%f",&basic_salary);

	da = 0.4*basic_salary;
	hra = 0.2*basic_salary;

	printf("-------------------------------");

	printf("\nDearness Allowance of ramesh is:%f",da);
	printf("\nHouse Rent Allowance of ramesh is:%f",hra);

	printf("\nGross Salary of ramesh is:%f",basic_salary+da+hra);

	printf("\n-------------------------------\n");
}
