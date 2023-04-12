#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<mqueue.h>

#define MAX_MESSAGES 10
#define MAX_MSG_SIZE 256
#define MSG_BUFFER_SIZE (MAX_MSG_SIZE + 10)

int main(){

	struct mq_attr attr;

	attr.mq_flags = 0;
	attr.mq_maxmsg = MAX_MESSAGES;
	attr.mq_msgsize = MAX_MSG_SIZE;
	attr.mq_curmsgs = 0;


	mqd_t mq = mq_open("/my_queue",O_CREAT|O_RDONLY,0644,&attr);

	if(mq == (mqd_t)-1){
		perror("mq_open");
		exit(1);
	}

	char buffer[MSG_BUFFER_SIZE];

	unsigned int prio;
	int nbytes;

	while(1){
		nbytes = mq_receive(mq,buffer,MSG_BUFFER_SIZE,&prio);

		if(nbytes == -1){
			perror("mq_receive");
			exit(1);
		}

		buffer[nbytes] = '\0';
		printf("Received Message is %s\n",buffer);
	}

	mq_close(mq);
	mq_unlink("/my_queue");
	return 0;
}


