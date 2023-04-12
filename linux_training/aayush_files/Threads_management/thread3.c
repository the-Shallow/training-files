#include<pthread.h>
#include<stdio.h>
#include<unistd.h>

void *PrintHello(void *threadid)
{
	printf("\nHello World!\n");
	printf("I am waiting\n");
	while(1);
}

int main()
{
	pthread_t thread;
	int rc,t=0;
	printf("Creating Thread %d\n",t);
	rc= pthread_create(&thread,NULL,PrintHello,NULL);
	printf("\n Thread ID : %u",thread);
	//pthred_join(thread,NULL);
	sleep(6);

	t=pthread_cancel(thread);
	if(t==0)
	{
		printf("\n canceled thread \n");
		printf("\n Thread ID :%u\n",thread);
	}
}
