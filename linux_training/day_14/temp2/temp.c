#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void* thr_fn1(void* arg){

	printf("\nthrd1 returning\n");
	printf("\nTHD ID = %u\n",pthread_self());
	return ((void*)1);
}

void* thr_fn2(void* arg){

	printf("\nthread 2 exiting\n");
	printf("THD ID = %u\n",pthread_self());
	pthread_exit((void*)2);
}

int main(){

	int err;
	pthread_t tid1,tid2;
	void* tret;
		
	pthread_create(&tid1,NULL,thr_fn1,NULL);
	pthread_create(&tid2,NULL,thr_fn2,NULL);
	pthread_join(tid1,&tret);
	printf("\nExit Code of thread 1 is %d\n",(int)tret);

	pthread_join(tid2,&tret);
	printf("\nExit Code of thread 2 is %d\n",(int)tret);
}
