#include<stdio.h>
#include<pthread.h>

pthread_once_t once = PTHREAD_ONCE_INIT;

void myinit()
{
	printf("\n I am in INIT FUNCTION\n");
}
void *mythread(void *i)
{
	printf("\n I am in mythread : %d\n",(int*)i);
	pthread_once(&once,myinit);
	//sleep(10);
	printf("\n Exit from mythread: %d\n",(int*)i);
}

int main()
{
	pthread_t thread1,thread2,thread3;
	pthread_create(&thread1,NULL,mythread,(void*)1);
	//sleep(2);
	pthread_create(&thread2,NULL,mythread,(void*)2);
	//sleep(2);
	pthread_create(&thread3,NULL,mythread,(void*)3);

	pthread_exit(NULL);
}
