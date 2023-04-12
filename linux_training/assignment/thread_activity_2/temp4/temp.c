#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void* thread_func(void* arg){

	pthread_t tid = pthread_self();
	printf("Thread ID: %lu\n",tid);

	pthread_exit(NULL);
}

int main(){

	pid_t pid = getpid();

	printf("Process ID :%d\n",pid);

	pthread_t thread;

	int rc = pthread_create(&thread,NULL,thread_func,NULL);

	if(rc){
		printf("Error,return code is %d\n",rc);
		return -1;
	}

	pthread_join(thread,NULL);

	return 0;
}
