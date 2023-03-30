#include<stdio.h>
#include<string.h>

// Student Attendace Record

int is_student_eligible_award( char* atten ){

	int absent = 0,late = 0;

	for(int i = 0;i<strlen(atten);i++){
		if(atten[i] == 'P' ) late = 0;
		if( atten[i] == 'A' ) {
			late = 0;
			absent++;
		}
		if( atten[i] == 'L' ) late++;

		if( absent >= 2 || late == 3 ) return 0;
	}

	return 1;
}

void main(){

	char attendance[50];

	printf("Enter the attendance:");
	fgets(attendance,50,stdin);

	is_student_eligible_award(attendance) ? printf("\nStudent is eligible for award\n") : printf("\nStudent is not eligible for award\n");
}
