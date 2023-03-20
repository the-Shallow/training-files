#include<stdio.h>
#include<fcntl.h>

int main(){

	int fd1,fd3;
	fd1 = open("file.txt",O_RDONLY|O_CREAT|O_TRUNC,777);
	fd3 = fcntl(fd1,F_DUPFD,10);
	
	printf("\nfd3 == %d\n",fd3);
	close(fd1);
	close(fd3);
}
