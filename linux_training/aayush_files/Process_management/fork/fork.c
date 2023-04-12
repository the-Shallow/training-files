#include<stdio.h>
int main()
{
	printf("One\n");
	fork();
	printf("two\n");
	while(1);
	return 0;
}

