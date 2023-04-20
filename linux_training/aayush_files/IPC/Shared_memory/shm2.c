#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/shm.h>

int main()
{
	struct shmid_ds buf;
	size_t s=20;
	int sid;
	sid = shmget(555,s,0666|IPC_CREAT);
	printf("Sh mem ID :%d \n",sid);

	int *atch;
	atch=shmat(sid,0,0);
	printf("0x%x\n",atch);

	int con;
	con = shmctl(sid,IPC_STAT,&buf);
	printf("COntrol :%d\n",con);

	printf("Size of shared memory : %d\n",buf.shm_segsz);

	printf("\n\n");
	exit(0);
}
