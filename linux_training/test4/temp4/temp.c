#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){

	pid_t pid,status;

	pid = fork();

	if(pid == 0){
		execlp("ps","ps",NULL);
		exit(0);
	}

	wait(&status);

	printf("The child process is terminated executing ps command\n");
	printf("Now parent will also terminate\n");
	return 0;
}
