#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<sys/types.h>

void* thread_fun(void* arg){

	while(1){
		printf("In a infinite loop\n");
		sleep(2);
	}

	return 0;
}

int main(){

	pthread_t thread;
	pthread_create(&thread,NULL,thread_fun,NULL);

	sleep(2);

	pthread_cancel(thread);
	printf("Thread cancelled \n");
	pthread_join(thread,NULL);

	return 0;
}
