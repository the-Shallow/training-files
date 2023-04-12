#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/types.h>

#define MSG_SIZE 256

int main(){

	int fds[2];

	char parent_msg[MSG_SIZE];
	char child_msg[MSG_SIZE];

	pid_t pid;

	if(pipe(fds) == -1){
		perror("pipe");
		exit(-1);
	}

	pid = fork();
	//printf("%d\t%d",fds[0],fds[1]);
	if(pid == 0){
		close(fds[1]);

		if(read(fds[0],parent_msg,MSG_SIZE) == -1){
			perror("read");
			exit(-1);
		}

		printf("Child Received Message is %s\n",parent_msg);

		strcpy(child_msg,"Hi parent , this is child");

		if(write(fds[0],child_msg,strlen(child_msg)+1) == -1){
			perror("write");
			exit(-1);
		}

		close(fds[0]);
		exit(1);
	}else {
		close(fds[0]);

		strcpy(parent_msg,"Hi Child , This is parent");

		if(write(fds[1],parent_msg,strlen(parent_msg)+1) == -1){
			perror("write");
			exit(-1);
		}

		printf("Parent Sending Message: %s\n",parent_msg);

		if(read(fds[1],child_msg,MSG_SIZE) == -1){
			perror("read");
			exit(-1);		
		}

		printf("Parent Received Message: %s\n",child_msg);

		close(fds[1]);

		exit(1);
	}

	return 0;
}

