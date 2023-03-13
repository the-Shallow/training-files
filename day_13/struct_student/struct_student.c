#include<stdio.h>

// Student Details

struct Student {
	int roll_no;
	char name[50];
};

void main(){

	struct Student s1;
	struct Student arr[2];

	struct Student* p = &s1;

	printf("Enter the roll No. of the student:\n");
	scanf("%d",&s1.roll_no);
	
	printf("Enter the name of the student:\n");
	scanf(" %s",s1.name);

	printf("\nThe roll No of the student is %d\n",p->roll_no);
	printf("\nThe roll No of the student is %s\n",p->name);

	for(int i = 0;i<2;i++){
		printf("Enter the roll No. of the student:\n");
		scanf("%d",&arr[i].roll_no);
	
		printf("Enter the name of the student:\n");
		scanf(" %s",arr[i].name);
	}

	printf("\nThe roll No of the student is %d\n",s1.roll_no);
	printf("\nThe roll No of the student is %s\n",s1.name);


	for(int i = 0;i<2;i++){
		printf("\nThe roll No of the student is %d\n",arr[i].roll_no);
		printf("\nThe roll No of the student is %s\n",arr[i].name);
	}

}
