#include<stdio.h>


char* get_grades(int marks){
	if( marks >= 50 ) return "Pass";
	else return "Fail";
}


void main(){

	int marks;

	printf("Enter the value of marks:");
	scanf("%d",&marks);

	printf("\n%s\n", get_grades(marks) );

}
