#include<stdio.h>

// Print and count the number divisible by 5 or 3

void main(){
	int num,count = 0;

	printf("Enter the value of num:");
	scanf("%d",&num);

	for(int i = 0;i<=num;i++){
		if(i % 3 == 0 || i % 5 == 0){
			printf("The number %d\n",i);
			count++;
		}
	}

	printf("\nThe count is %d\n",count);
}
