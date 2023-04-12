#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/sem.h>

int get_semaphore(void);
int release_semaphore(void);
int semId;

struct sembuf sem_op;

int main(){

	int i;
	semId = semget((key_t)1234,1,0666|IPC_CREAT);

	if(semctl(semId,0,SETVAL,1) < 0){
		printf("error\n");	
	}

	for(int i = 0;i<=5;i++){
		get_semaphore();
		printf("%d:got the semaphore\n",getpid());
		sleep(1);
		printf("%d:released the semphore\n",getpid());
		release_semaphore();
		sleep(1);
	}

	if(semctl(semId,0,IPC_RMID,0) < 0){
		printf("Failed to delete the semaphore\n");
	}else {
		printf("Semaphore deleted\n");	
	}
}

int get_semaphore(){

	sem_op.sem_num = 0;
	sem_op.sem_op = -1;
	sem_op.sem_flg = 0;

	if(semop(semId,&sem_op,1) < 0){
		printf("Failed to get the semaphore\n");
		return -1;
	}

	return 0;
}

int release_semaphore(){

	sem_op.sem_num = 0;
	sem_op.sem_op = 1;
	sem_op.sem_flg = 0;

	if(semop(semId,&sem_op,1) < 0){
		printf("Failed to release semaphore\n");
		return -1;	
	}

	return 0;
}
