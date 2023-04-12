#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/sem.h>
#include<sys/shm.h>
#include<string.h>

#define MY_KEY 1992
#define SHM_SIZE 0x1000

int main(){

	int semId,shmId;

	char* pShm;
	struct sembuf smop;

	semId = semget(MY_KEY,1,0666|IPC_CREAT);

	if(semId < 0){
		perror("semget");
		printf("Could not create semphore\n");
		return 1;
	}else {
		printf("Opened a semaphore ID is %d\n",semId);
	}

	if (semctl(semId, 0, IPC_RMID, 0) < 0) {
    perror("semctl");
    printf("Could not delete semaphore\n");
    return 1;
}

	semctl(semId,0,SETVAL,0);
	
	shmId = shmget(MY_KEY,SHM_SIZE,0666|IPC_CREAT);
	
	if(shmId < 0){
		printf("Could not create shared segemnt \n");
		return 2;	
	}

	pShm = shmat(shmId,NULL,0);

	if(!pShm){
		printf("Could not attch shared memory segement \n");
		return 3;		
	}

	smop.sem_num = 0;
	smop.sem_op = -1;
	smop.sem_flg = 0;

	semop(semId,&smop,1);

	printf("Got the semaphore \n");
	printf("%s\n",pShm);

}
