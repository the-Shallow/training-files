#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	int pid,stat;

	pid = fork();

	if(pid == 0)
	{
		printf("Child pid = %d\n",getpid());
		printf("\nChild Process\n");
		exit(0);
	}
	pid = wait(&stat);
	printf("parent pid= %d\n",getpid());
	printf("pid= %d\n",pid);
	printf("%d\n",WEXITSTATUS(stat));
}
