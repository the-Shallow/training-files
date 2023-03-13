#include<stdio.h>

// Calculate the student division


int get_percentage(int sub1,int sub2,int sub3,int sub4,int sub5){
	
	int sum = sub1 + sub2 + sub3 + sub4 + sub5;

	return (sum * 100)/ 500;

}


char* get_division(float percentage){
	printf("%f\n",percentage);
	if( percentage >= 60.00  ) return "First division";
	if( percentage >= 50.00 && percentage <= 59.00 ) return "Second division";
	if( percentage >= 40.00 && percentage <= 49.00 ) return "Thrid division";
	return "Fail";
}

void main(){

	int sub1,sub2,sub3,sub4,sub5;

	printf("Enter the marks of subject1:\n");
	scanf("%d",&sub1);

	printf("Enter the marks of subject2:\n");
	scanf("%d",&sub2);
	
	printf("Enter the marks of subject3:\n");
	scanf("%d",&sub3);

	printf("Enter the marks of subject4:\n");
	scanf("%d",&sub4);

	printf("Enter the marks of subject5:\n");
	scanf("%d",&sub5);

	int percentage = get_percentage(sub1,sub2,sub3,sub4,sub5);

	printf("The Division of the student is %s\n", get_division(percentage) );

}
