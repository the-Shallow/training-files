#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
	int pid_1;

	printf("Current process pid = %d\n",getpid());

	pid_1 = fork();

	printf("%d\n",pid_1);

	if(pid_1==0)
	{
		sleep(5);
		printf("new chlid process pid = %d\n",getpid());
		printf("new chlid parent process pid = %d\n",getppid());
	}
	else
	{
		sleep(3);
		printf("parent process pid = %d\n",getpid());
		printf("parents parent process pid = %d\n",getppid());
	}

	
	while(1);
	exit(0);
	
}
