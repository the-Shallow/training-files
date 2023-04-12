#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<mqueue.h>

#define MAX_MESSAGES 10
#define MAX_MSG_SIZE 256

int main(){

	mqd_t mq = mq_open("/my_queue",O_WRONLY);

	if(mq == (mqd_t)-1){
		perror("mq_open");
		exit(1);
	}

	char buffer[MAX_MSG_SIZE];

	unsigned int prio;

	while(1){
		printf("Enter a message:");

		fgets(buffer,MAX_MSG_SIZE,stdin);

		prio = 1;

		if(mq_send(mq,buffer,MAX_MSG_SIZE,prio) == -1){
			perror("mq_send");
			exit(1);
		}
	}

	mq_close(mq);
	return 0;
}


