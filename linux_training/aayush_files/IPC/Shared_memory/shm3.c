#include<sys/shm.h>
#include<stdio.h>
#define SIZE 20
int main()
{
	char *ptr;
	int shmid,pid,i;

	//create
	shmid = shmget((key_t)55,20,IPC_CREAT|0666);

	//Attach ptr
	ptr = (char*) shmat(shmid,(char *)0,0);

	pid=fork();

	if(pid==0)
	{
		//strcpy(ptr,"shared memory\n");
		//read data to STDOUT
		i=read(0,ptr,SIZE);
		if(i==-1)
		{
			printf("\nRead Failed\n");
		}
		else
		{
			printf("Child reads %s\n",ptr);
		}
	}
	else
	{
		//write data from STDOUT
		//write(1,ptr,SIZE);

		wait(0);
		write(1,ptr,SIZE);
		printf("Parent reads...%s\n",ptr);

		//Destroys memory
		shmctl(shmid,IPC_RMID,NULL);
	}
}

