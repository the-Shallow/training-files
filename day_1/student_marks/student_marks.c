#include<stdio.h>

// Calculate aggreagate marks and percentage 

void main(){
	int sub1,sub2,sub3,sub4,sub5;

	printf("Enter the marks of subject1:");
	scanf("%d",&sub1);
	printf("\nEnter the marks of subject2:");
	scanf("%d",&sub2);
	printf("\nEnter the marks of subject3:");
	scanf("%d",&sub3);
	printf("\nEnter the marks of subject4:");
	scanf("%d",&sub4);
	printf("\nEnter the marks of subject5:");
	scanf("%d",&sub5);
	int aggragate_sum = sub1 + sub2 + sub3 + sub4 + sub5;
	float perc_sub1 = (float)(( sub1 * 100 ) / aggragate_sum);
	float perc_sub2 = (float)(( sub2 * 100 ) / aggragate_sum);
	float perc_sub3 = (float)(( sub3 * 100 ) / aggragate_sum);
	float perc_sub4 = (float)(( sub4 * 100 ) / aggragate_sum);
	float perc_sub5 = (float)(( sub5 * 100 ) / aggragate_sum);
	printf("\n--------------------------\n");

	printf("The Aggreagate sum of student marks is:%d\n",sub1+sub2+sub3+sub4+sub5);

	printf("The percentage obtained by student in subject 1 is:%f\n", perc_sub1 );
	printf("The percentage obtained by student in subject 2 is:%f\n", perc_sub2 );
	printf("The percentage obtained by student in subject 3 is:%f\n", perc_sub3 );
	printf("The percentage obtained by student in subject 4 is:%f\n", perc_sub4 );
	printf("The percentage obtained by student in subject 5 is:%f\n", perc_sub5 );
	
	printf("\n---------------------------\n");
}
