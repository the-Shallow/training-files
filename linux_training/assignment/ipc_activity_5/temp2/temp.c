#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/shm.h>
#include<sys/wait.h>

#define SHM_SIZE 1024


int main(){

	int shmid;
	pid_t pid;
	char* shmaddr;
	int status;

	if((shmid = shmget(IPC_PRIVATE,SHM_SIZE,IPC_CREAT|0666)) < 0){
		perror("shmget");
		exit(1);
	}

	pid = fork();

	if(pid == 0){
		shmaddr = (char*)shmat(shmid,NULL,0);

		if(shmaddr == (char*)-1){
			perror("shmat");
			exit(1);
		}
		
		sprintf(shmaddr,"Hello World!!");
		shmdt(shmaddr);
		exit(0);
	}else{
		waitpid(pid,&status,0);
		shmaddr = (char*)shmat(shmid,NULL,0);

		if(shmaddr == (char*)-1){
			perror("shmat");
			exit(1);
		}

		printf("Message received from child: %s\n",shmaddr);

		shmdt(shmaddr);
		shmctl(shmid,IPC_RMID,NULL);
	}

	return 0;
}
