#include<stdio.h>

// Swap numbers

void main(){
	int num1,num2;

	printf("Enter the value of num1:");
	scanf("%d",&num1);
	printf("\nEnter the value of num2:");
	scanf("%d",&num2);

	printf("The values of num1 and num2 bedore swapping");
	printf("\nThe value of num1 is :%d",num1);
	printf("\nThe value of num2 is :%d",num2);


	int temp = num1;
	num1 = num2;
	num2 = temp;

	printf("\nThe values of num1 and num2 after swapping");
	printf("\nThe value of num1 is :%d\n",num1);
	printf("\nThe value of num2 is :%d\n",num2);
}	
