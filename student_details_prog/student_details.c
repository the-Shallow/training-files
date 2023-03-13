#include<stdio.h>

// Details of student

void main() {
	char name[20];
	int birthYear;
	char city[20];
	char branch[20];

	printf("Enter you name:");
	scanf("%s",name);
	printf("\nEnter your birthYear:");
	scanf("%d", &birthYear);
	printf("\nEnter your city:");
	scanf("%s",city);
	printf("\nEnter your branch:");
	scanf("%s",branch);

	printf("\nPrinting Student Details");
	printf("\n------------------------");
	printf("\nName of student is : %s",name);
	printf("\nBirthYear of student is : %d",birthYear);
	printf("\nCity of student is : %s",city);
	printf("\nBranch of student is : %s",branch);
	printf("\nAge of student is : %d",2023-birthYear);
	printf("\n------------------------\n");
}
