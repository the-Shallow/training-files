#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>
int main()
{
	pid_t chpid, child1, child2;
	int ii,stat;

	printf("I am a process my process id is %d\n",getpid());
	printf("I am a creating two child processes & make them run some code\n");

	child1 =fork();
	if(child1 == 0)
	{
		printf("I am first child, my pid is %d\n",getpid());

		printf("I am tired, sleeping for 10 sec\n");

		sleep(10);

		exit(1);
	}

	child2=fork();
	if(child2 == 0)
	{
		printf("I am second child, my pid is %d\n",getpid());

		printf("I am tired, sleeping for 5 sec\n");

		sleep(5);

		exit(2);
	}

	printf("I am parent, my children are working & sleeping, i wait for them\n");

	chpid=wait(&stat);
	if(chpid==child1)
	{
		printf("my first child terminated with status %d\n",WEXITSTATUS(stat));
	}

	if(chpid==child2)
	{
		printf("my second child terminated with status %d\n",WEXITSTATUS(stat));
	}

	chpid=wait(&stat);
	if(chpid==child1)
	{
		printf("my first child terminated with status %d\n",WEXITSTATUS(stat));
	}

	if(chpid==child2)
	{
		printf("my second child terminated with status %d\n",WEXITSTATUS(stat));
	}

	printf("both children got terminated, now i will do the same\n");
}


