#include<stdio.h>
#include<stdlib.h>

void callback1(void)
{
	printf("CB1 called\n");
}

void callback2(void)
{
	printf("CB2 called\n");
}

void callback3(void)
{

	printf("CB3 called\n");
}
int main()
{
	printf("Registering callback 1\n");
	atexit(callback1);
	
	printf("Registering callback 2\n");
	atexit(callback2);

	printf("Registering callback 3\n");
	atexit(callback3);

	printf("main()...executing now\n");
}
