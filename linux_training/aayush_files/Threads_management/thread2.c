#include<stdio.h>
#include<unistd.h>
#include<stdio.h>
#include<pthread.h>

void * start_one(void *arg)
{
	int i;
	for(i=0;i<100;i++)
	{
		printf("Thread of control 1\n");
	}
}

void * start_two(void *arg)
{
	int i;
	for(i=0;i<100;i++)
	{
		printf("**Thread of control 2\n");
	}
}

int main()
{
pthread_t pt1,pt2;
getchar();
pthread_create(&pt1,NULL,start_one,NULL);
pthread_create(&pt2,NULL,start_two,NULL);
getchar();

pthread_join(pt1,NULL);
pthread_join(pt2,NULL);

printf("End of main thread\n");
}
