#include<stdio.h>

// Print and count all number divisible by 5

void main(){
	int num,count = 0;

	printf("Enter the value of num:");
	scanf("%d",&num);

	for(int i = 0;i<=num;i++){
		if(i % 5 == 0 ) {
			printf("The number is divisible %d\n",i);
			count++;
		}
	}

	printf("\nThe count is %d\n",count);
}
