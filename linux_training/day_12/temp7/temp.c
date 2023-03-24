#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(){

	pid_t pid;
	int option,stat;
	
	while(1){
		printf("\nEnter 1 to exec or 0 to exit\n");
		scanf("%d",&option);

		if(!option) exit(0);

		if(fork() == 0){
			execl("/bin/ls","ls",0);
			exit(5);
		}

		pid = wait(&stat);

		printf("\n%d\n",pid);
	}

}

