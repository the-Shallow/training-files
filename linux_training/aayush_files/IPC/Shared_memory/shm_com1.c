#include<stdio.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/shm.h>

#define SHM_SIZE 1024 //make it a 1k shared memory segment

int main(int argc, char *argv[])
{
	key_t key;
	int shmid;
	char *data;
	int mode;

	if(argc > 2)
	{
		fprintf(stderr,"usage:shmdemo [data_to_write]\n");
		exit(1);
	}

	//connect to (and possibly create) the segment:
	if((shmid = shmget(111,SHM_SIZE,0644|IPC_CREAT))==-1)
	{
		perror("shmget");
		exit(1);
	}

	data = shmat(shmid,(void *)0,0);
	if(data = (char*)(-1))
	{
		perror("shmat");
		exit(1);
	}

	if(argc == 2)
	{
		printf("Writing to segment : \"%s\"\n",argv[1]);
		strncpy(data,argv[1],SHM_SIZE);
	}

	printf("Segment contains :\"%s\"\n",data);

	if(shmdt(data)== -1)
	{
		perror("Shmdt");
		exit(1);
	}
	return 0;
}

