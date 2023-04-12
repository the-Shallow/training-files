#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#define NUM_THREADS 3

int i = 0;

void* myfun(void *null){

	i++;
	int result = 0;
	result = result + i*1000;
	printf("result = %d\n",result);
	sleep(1);
	printf("Job Done\n");
}

int main(){

	pthread_t thread[NUM_THREADS];

	pthread_attr_t attr;
	int rc,t,status,detach_state;

	pthread_attr_getdetachstate(&attr,&detach_state);

	printf("\n Detach State: %d\n",(int *)detach_state);

	pthread_attr_init(&attr);
	pthread_attr_setdetachstate(&attr,PTHREAD_CREATE_DETACHED);

	for(t = 0;t<NUM_THREADS;t++){
		printf("Creating thread %d\n",t);

		rc = pthread_create(&thread[t],&attr,myfun,NULL);

		if(rc){
			printf("Error; return code from pthread create() is %d\n",rc);
			exit(-1);
		}
	}

	pthread_attr_getdetachstate(&attr,&detach_state);

	printf("\n Detach State : %d\n",(int *)detach_state);

	pthread_attr_destroy(&attr);

	printf("\nExiting from main Thread\n");

	for(t = 0;t<NUM_THREADS;t++) rc = pthread_join(thread[t],NULL);

	return 0;
}
