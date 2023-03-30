#include<stdio.h>

// Calculate max of 4 number

void main(){
	int num1,num2,num3,num4;

	printf("Enter the value of num1,num2,num3,num4:");
	scanf("%d%d%d%d",&num1,&num2,&num3,&num4);

	if(num1 >= num2 && num1 >= num3 && num1 >= num4) printf("Maximum number is %d\n",num1);
	else if(num2 >= num3 && num2 >= num4) printf("Maximum number is %d\n",num2);
	else if(num3 >= num4) printf("Maximum number is %d\n",num3);
	else printf("Maximum number is %d\n",num4); 
}
