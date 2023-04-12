#include<stdio.h>
#include<unistd.h>

int main()
{
	printf("main process\n");
	fork();
	printf("process 1\n");
	fork();
	printf("process 2\n");
	while(1);
	return 0;
}
