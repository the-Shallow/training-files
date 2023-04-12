#include<stdio.h>
#include<unistd.h>

int main()
{
	printf("My process pid = %d ",getpid());
	printf("my parent pid = %d\n",getppid());

	printf("Linux kernel\n");
	while(1);
	return 0;
}
