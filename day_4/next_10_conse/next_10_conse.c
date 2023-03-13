#include<stdio.h>

// Print next ten consecutive odd and even number


void main(){
	int val;
	
	printf("Enter the value of number:");
	scanf("%d",&val);
	
	int count = 1;
	printf("\nThe Odd numbers are:\n");
	for(int i = val + 1;count <=10;i++){
		if(i % 2 != 0) {
			printf("%d,",i);
			count++;
		}
	}

	printf("\nThe Even numbers are:\n");
	for(int i = val + 1;count <=20;i++){
		if(i % 2 == 0) {
			printf("%d,",i);
			count++;
		}
	}
	printf("\n");
}
