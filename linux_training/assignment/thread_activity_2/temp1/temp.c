#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

#define NUM_THREADS 5

void* thread_func(void* thread_num){

	int tn = *((int*)thread_num);
	printf("Hello from thread %d\n",tn);

	pthread_exit(NULL);
}

int main(){

	pthread_t threads[NUM_THREADS];

	int thread_args[NUM_THREADS];

	int i,rc;

	for(i = 0;i<NUM_THREADS;i++){
		thread_args[i] = i;
		rc = pthread_create(&threads[i],NULL,thread_func,(void*)&thread_args[i]);

		if(rc){
			printf("ERROR,return code is %d\n",rc);
			exit(-1);
		}
	}

	for(i = 0;i<NUM_THREADS;i++){
		rc = pthread_join(&threads[i],NULL);

		if(rc){
			printf("ERROR,return code is %d\n",rc);
			exit(-1);
		}

		printf("%d Thread is completed.\n",i);
	}

	return 0;
}
