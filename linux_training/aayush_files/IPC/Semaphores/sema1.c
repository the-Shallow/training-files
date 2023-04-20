//Through same program we can create and release the semaphore without creating two different program

#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<sys/sem.h>
#include<string.h>

int get_semaphore(void);
int release_semaphore(void);
int sem_id;
struct sembuf sem_op;

int main()
{
	int i;
	sem_id=semget((key_t)1234,1,0666|IPC_CREAT);
	if(semctl(sem_id,0,SETVAL,1)<0)
	{
		printf("Error\n");
	}
	for(i=0;i<=5;i++)
	{
		get_semaphore();
		printf("%d:got the semaphore\n",getpid());
		sleep(1);
		printf("%d:released the semaphore\n",getpid());
		release_semaphore();
	        sleep(1);
	}

	if(semctl(sem_id,0,IPC_RMID,0)<0)
	{
		printf("Failed to delete the semaphore\n");
		}
		else
		{
	printf("Semaphore Deleted\n");
	}
}

	int get_semaphore(void)
	{
	sem_op.sem_num=0;
	sem_op.sem_op=-1;
	sem_op.sem_flg=0;
	if(semop(sem_id,&sem_op,1)<0)
	{
		printf("Failed to get the semaphore\n");
		return -1;
	}
	return 0;
	}

	int release_semaphore(void)	
	{
		sem_op.sem_num=0;
		sem_op.sem_op=1;
		sem_op.sem_flg=0;

		if(semop(sem_id,&sem_op,1)<0)
		{
			printf("Failed to release semaphore\n");
			return -1;
		}
		return 0;
	}
				




