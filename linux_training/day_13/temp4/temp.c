#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>

void* start_one(void *arg){

	for(int i = 0;i<100;i++) printf("Thd of Control 1\n");
}

void* start_two(void* arg){

	for(int i = 0;i<100;i++) printf("** Thd of Control 2\n");
}

int main(){

	pthread_t pt1,pt2;
	getchar();
	pthread_create(&pt1,NULL,start_one,NULL);
	pthread_create(&pt2,NULL,start_two,NULL);
	pthread_join(pt1,NULL);
	pthread_join(pt2,NULL);
	return 0;
}
