#include<stdio.h>
#include<stdlib.h>
#include<mqueue.h>
#include<string.h>
#include<errno.h>

#define MQ_NAME "/my_queue"
#define MQ_MAX_MSGS 10
#define MQ_MAX_MSG_SIZE 1024

int main(){

	mqd_t mqd;

	struct mq_attr attr;

	char buff[MQ_MAX_MSG_SIZE];

	attr.mq_flags = 0;
	attr.mq_maxmsg = MQ_MAX_MSGS;
	attr.mq_msgsize = MQ_MAX_MSG_SIZE;
	attr.mq_curmsgs = 0;

	mqd = mq_open(MQ_NAME,O_CREAT|O_RDWR,0666,&attr);

	if(mqd == (mqd_t)-1){
		perror("mq_open");
		exit(EXIT_FAILURE);
	}

	strcpy(buff,"Hello World!!");

	if(mq_send(mqd,buff,strlen(buff)+1,0) == -1){
		perror("mq_send");
		exit(EXIT_FAILURE);
	}

	if(mq_receive(mqd,buff,MQ_MAX_MSG_SIZE,NULL) == -1){
		perror("mq_receive");
		exit(EXIT_FAILURE);
	}

	printf("Recived Message : %s\n",buff);

	mq_close(mqd);

	if(mq_unlink(MQ_NAME) == -1){
		perror("mq_unlink");
		exit(EXIT_FAILURE);
	}

	return 0;
}
