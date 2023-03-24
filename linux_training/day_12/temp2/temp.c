#include<stdio.h>
#include<stdlib.h>

int main(){

	int pid,stat;

	pid = fork();
	if(pid == 0){
		printf("\nChild Process\n");
		exit(12);
	}


	printf("\nPID Before: %d\n",pid);
	pid = wait(&stat);
	printf("\nPID After: %d\n",pid);

	printf("%d\n",WEXITSTATUS(stat));
}
