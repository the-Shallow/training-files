#include<stdio.h>

// Print square of numbers 1 to n

void main(){
	int limit;

	printf("Enter the value of limit:");
	scanf("%d",&limit);

	for(int i = 1;i<=limit;i++) printf("%d\n",i*i);
}
