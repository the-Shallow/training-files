#include<stdio.h>
#include<fcntl.h>

int main(){
	
	int fd1,fd2,fd3;

	fd2 = open("linux.txt",O_WRONLY,777);

	printf("fd returned by kernel for linux.txt = %d\n",fd2);

	close(fd2);

	return 0;
}

