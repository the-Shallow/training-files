#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void* thread_func(void* arg){

	int i;
	printf("Starting thread...\n");

	for(i = 1;i<=10;i++){
		printf("Thread count %d\n",i);
		sleep(1);
	}

	printf("Thread finished.\n");
	pthread_exit(NULL);
}

int main(){

	pthread_t thread;
	int rc;

	printf("Creating thread...\n");

	rc = pthread_create(&thread,NULL,thread_func,NULL);

	if(rc){
		printf("Error,return code is %d\n",rc);
		exit(-1);
	}

	sleep(5);

	printf("Cancelling Thread...\n");

	rc = pthread_cancel(thread);

	if(rc){
		printf("Error,return code is %d\n",rc);
		exit(-1);
	}

	pthread_join(thread,NULL);

	printf("Main thread finished.\n");

	return 0;
}
