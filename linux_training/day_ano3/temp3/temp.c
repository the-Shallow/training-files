#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

int sharedVar = 0;
int i;
void *thread_inc1(void *arg){
	for(i = 0;i<100000;i++) sharedVar++;
}

void *thread_inc2(void *arg){
	for(i = 0;i<100000;i++) sharedVar++;
}

int main(){

	pthread_t thread1,thread2;

	pthread_create(&thread1,NULL,thread_inc1,NULL);
	pthread_create(&thread2,NULL,thread_inc2,NULL);

	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);

	printf("%d\n",sharedVar);

	return 0;
}
