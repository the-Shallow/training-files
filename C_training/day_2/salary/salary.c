#include<stdio.h>

// Calculate the salary

long get_salary(char department,char qualification,int year_service){
	if( department == 'i' ){
		if(year_service >= 10){
			return qualification == 'p' ? 150000 : 100000;
		}else {
			return qualification == 'p' ? 100000 : 70000 ;
		}
	}else if( department == 'a' ){
		if(year_service >= 10){
			return qualification == 'p' ? 120000 : 90000;
		}else {
			return qualification == 'p' ? 100000 : 60000 ;
		}	
	}else {
		if(year_service >= 10){
			return qualification == 'p' ? 100000 : 80000;
		}else {
			return qualification == 'p' ? 900000 : 50000 ;
		}
	}
}

void main(){
	char department,qualification;
	int year_service;
	long salary;

	printf("Enter the department,qualifications,year of service:");
	scanf("%c%c%d",&department,&qualification,&year_service);

	if(department != 'i' && department != 'a' && department != 'h' ){
		printf("Invlalid Department");
		return;
	}

	if( qualification != 'p' && qualification != 'g' ){
		printf("Invlalid Qualification");
		return;
	}

	salary = get_salary(department,qualification,year_service);
	printf("\nThe salary is : %lu\n",salary);
}
