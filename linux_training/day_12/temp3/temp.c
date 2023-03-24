#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(){
	
	pid_t chpid , child1,child2;
	int ii,stat;

	printf("Current Process Id is %d\n",getpid());
	child1 = fork();
	
	if(child1 == 0){
		printf("\nChild 1 with pid %d\n",getpid());
		sleep(10);
		exit(512);
	}

	child2 = fork();

	if(child2 == 0){
		printf("\nChild 2 with pid %d\n",getpid());
		sleep(10);
		exit(12);		
	}

	//while(chpid = wait(&stat) >= 0) printf("%d\n",WEXITSTATUS(stat));
	chpid = wait(&stat);	
	if(chpid == child1){
		printf("\nExit code of child1 is %d\n",WEXITSTATUS(stat));
	}
	chpid = wait(&stat);	
	if(chpid == child2){
		printf("\nExit code of child2 is %d\n",WEXITSTATUS(stat));
	}
}
