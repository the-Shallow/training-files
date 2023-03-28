#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void* printHello(void *threadID){

	printf("\nHello World\n");
	printf("\nI am Waiting\n");
	while(1);
}

int main(){

	pthread_t thread;

	int rc,t=0;
	printf("Creating Thread %d\n",t);

	rc = pthread_create(&thread,NULL,printHello,NULL);
	//pthread_join(thread,NULL);
	sleep(6);
	t = pthread_cancel(thread);
	if(t == 0) printf("\n Thread Terminated\n");

	printf("\nThread ID: %u\n",thread);
}
