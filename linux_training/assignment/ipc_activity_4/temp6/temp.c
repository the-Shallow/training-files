#include<stdio.h>
#include<stdlib.h>
#include<mqueue.h>

int main(){

	mqd_t mqd;
	struct mq_attr attr;

	int numbytes,nummsgs;

	mqd = mq_open("/new_queue",O_CREAT|O_RDONLY,0644,NULL);

	if(mqd == (mqd_t)-1){
		perror("mq_open");
		exit(1);
	}

	mq_getattr(mqd,&attr);

	nummsgs = attr.mq_curmsgs;
	numbytes = attr.mq_msgsize * nummsgs;

	printf("Number of messages : %d\n",nummsgs);
	printf("Number of bytes : %d\n",numbytes);

	mq_close(mqd);

	return 0;
}
