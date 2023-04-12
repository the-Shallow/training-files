#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){

	pid_t pid1,pid2;

	int num1 = 10,num2 = 20;

	pid1 = fork();

	if(pid1 < 0){
		printf("Fork() Failed\n");
		exit(1);
	}else if(pid1 == 0) {
		int result = num1 * 2;
		printf("Child Process 1:Result is %d\n",result);
		exit(0);
	}else {

		pid2 = fork();

		if(pid2 < 0){
			printf("Fork() Failed\n");
			exit(1);
		}else if(pid2 == 0) {
			int result = num2 * 3;
			printf("Child Process 2:Result is %d\n",result);
			exit(0);
		}

	}

	int status;

	waitpid(pid1,&status,0);
	waitpid(pid2,&status,0);
	
	return 0;
}
