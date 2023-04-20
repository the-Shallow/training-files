#include<sys/shm.h>
#include<stdio.h>
#include<string.h>

int main()
{
	char *ptr;
	int shmid,pid;

	//Create shared memory area
	shmid = shmget((key_t)1,20,IPC_CREAT|0666);

	//Attach pointer to shared memory area
	ptr = (char*) shmat(shmid,(char *)0,0);

	pid = fork();

	if(pid==0)
	{
		strcpy(ptr,"Shared memory");
	}
	else
	{
		wait(0);
		printf("Parent reads....%c\n",*(ptr+2));
		printf("Parent reads %s\n",ptr);
	}
}
