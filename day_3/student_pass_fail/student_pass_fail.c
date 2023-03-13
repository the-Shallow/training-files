#include<stdio.h>

// Calculate student percentage and dispaly pass or fail and percentage


float get_student_percentage(int corr_ans,int neg_ans,int total_marks,int corr_marks,int neg_marks){
	int student_marks = (corr_ans * corr_marks) - (neg_ans*neg_marks);
	printf("\nThe Total marks obtained by student is %d\n" , student_marks);
	float percentage = ((float)student_marks * 100)/total_marks;

	return percentage;
}

void main(){
	int total_question,corr_marks,neg_marks,corr_ans,neg_ans,total_marks;

	printf("Enter the number of total questions:");
	scanf("%d",&total_question);

	printf("\nEnter the marks of one correct question:");
	scanf("%d",&corr_marks);

	printf("\nEnter the marks of one incorrect question:");
	scanf("%d",&neg_marks);

	printf("\nEnter the number of correct questions:");
	scanf("%d",&corr_ans);

	neg_ans = total_question - corr_ans;
	total_marks = total_question * corr_ans;
	float percentage = get_student_percentage(corr_ans,neg_ans,total_marks,corr_marks,neg_marks);
	printf( percentage >= 50.00 ? "\nPass" : "\nFail" );
	printf("\n%f\n",percentage);

}
