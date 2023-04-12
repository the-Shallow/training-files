#include<stdio.h>
#include<stdlib.h>
#include<sys/shm.h>
#include<string.h>

#define SHM_SIZE 1024

int main(int argc,char* argv[]){

	key_t key;
	int shmid;
	char* shm;
	char* data;

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

	data = argv[1];

	strncpy(shm,data,SHM_SIZE);
	
	printf("Message '%s' is written to shared memory\n",data);

	if(shmdt(shm) == -1){
		perror("shmdt");
		exit(EXIT_FAILURE);	
	}

	return 0;
}
