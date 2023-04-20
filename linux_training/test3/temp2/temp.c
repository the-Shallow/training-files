#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/shm.h>

int main(){

	int shmid = shmget(55,128,IPC_CREAT|0777);

	printf("The Id of the shared memeory is %d\n",shmid);

	shmctl(shmid,IPC_RMID,NULL);

	return 0;
}

