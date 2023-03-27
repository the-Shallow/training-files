#include<sys/types.h>
#include<pthread.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void* th_fn(void *p);

int fd;
int main(){


	pthread_t t1,t2;

	fd = open("etc/passwd",O_RDONLY);
	printf("File Opened\n");
	pthread_create(&t1,NULL,th_fn,"Thread One");
	pthread_create(&t2,NULL,th_fn,"Thread Two");
	pthread_join(t1,NULL);
	pthread_join(t2,NULL);

	
}


void* th_fn(void* p){

	char* str,buff[100];

	int n,pid;
	str = (char *)p;

	pid = getpid();

	printf("\nStarted Now for process with %s \t %d\n",str,pid);

	do{
		n = read(fd,buff,100);
		printf("\n%s:\t Read \t %d\n",str,pid);
		write(1,buff,n);
	}while(n);

	printf("\nFinished for process with %s \t %d\n",str,pid);
}
