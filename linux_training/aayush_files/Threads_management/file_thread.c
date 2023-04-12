#include<stdio.h>
#include<pthread.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>

void *th_fn(void *p);

int fd;
int main()
{
	pthread_t t1,t2;

	fd=open("/etc/passwd",O_RDONLY);
	printf("File opened with fd: %d\n",fd);
	pthread_create(&t1,NULL,th_fn,"Thread one");
	pthread_create(&t2,NULL,th_fn,"Thread two");
	pthread_join(t1,NULL);
	pthread_join(t2,NULL);

}

void *th_fn(void *p)
{
	char *str,buff[100];
	int n,pid;
	str = (char *)p;
	pid=getpid();
	printf("%s: \tStarted Now: \tFor process %d \n\n",str,pid);
	do
	{
		n=read(fd,buff,100);
		printf("%s: \t Read: \t %d \n\n",str,pid);
		printf("\n---------------\n");

		write(1,buff,n);

		printf("\n----------------\n");
		sleep(3);
	}while(n);
	printf("%s: \t Finished: \t For process %d \n\n",str,pid);
}
