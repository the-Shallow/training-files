#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<semaphore.h>

int main(){

	int count = 0;
	sem_t lock;

	if(sem_init(&lock,0,1) == -1){
		perror("sem_init");
		exit(EXIT_FAILURE);
	}

	pid_t pid = fork();

	if(pid == 0){
		for(int i = 0;i<=5;i++){
			if(sem_wait(&lock) == -1){
				perror("sem_wait");
				exit(EXIT_FAILURE);
			}
			count--;

			printf("Child process decremented count to %d\n",count);

			if(sem_post(&lock) == -1){
				perror("sem_post");
				exit(EXIT_FAILURE);	
			}
			sleep(5);
		}

		exit(EXIT_SUCCESS);
	}else {
		for(int i = 0;i<=5;i++){
			if(sem_wait(&lock) == -1){
				perror("sem_wait");
				exit(EXIT_FAILURE);
			}
			count++;

			printf("Parent process incremented count to %d\n",count);

			if(sem_post(&lock) == -1){
				perror("sem_post");
				exit(EXIT_FAILURE);	
			}
			sleep(5);
		}

		exit(EXIT_SUCCESS);
	}

	return 0;
}
