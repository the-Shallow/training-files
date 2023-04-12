#include<stdio.h>
#include<stdlib.h>
#include<sys/shm.h>
#include<string.h>

#define SHM_SIZE 1024

int main(){

	key_t key;
	int shmid;
	char* shm;

	if((key = ftok(".",'A')) == -1){
		perror("ftok");
		exit(EXIT_FAILURE);
	}

	if((shmid = shmget(key,SHM_SIZE,IPC_CREAT|0666)) == -1){
		perror("shmget");
		exit(EXIT_FAILURE);
	}

	if((shm = shmat(shmid,NULL,0)) == (char*)-1){
		perror("shmat");
		exit(EXIT_FAILURE);
	}

	
	printf("Message '%s' is read from shared memory\n",shm);

	if(shmdt(shm) == -1){
		perror("shmdt");
		exit(EXIT_FAILURE);	
	}

	if(shmctl(shmid,IPC_RMID,0) == -1){
		perror("shmctl");
		exit(EXIT_FAILURE);	
	}

	return 0;
}
