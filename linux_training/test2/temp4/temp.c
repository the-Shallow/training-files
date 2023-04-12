#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<sys/types.h>
#include<sys/mman.h>

void* thread_function(void* arg){

	printf("The Thread Id is %d\n",pthread_self());
	printf("The Process ID is %d\n",getpid());
	exit(0);
}

int main(){

	pthread_t thread;
	thread = pthread_create(&thread,NULL,thread_function,NULL);

	pthread_join(&thread,NULL);

	return 0;
}
