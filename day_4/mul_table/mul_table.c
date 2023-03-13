#include<stdio.h>


// Create Multiplication table


void main(){
	
	int number;

	printf("Enter the value of number:");
	scanf("%d",&number);


	for(int i = 0;i<=10;i++){
		printf("%d * %d == %d\n",number,i,number*i);
	}

}
