#include<stdio.h>
#include<fcntl.h>

int main(){

	int fd = open("file.txt",O_RDWR|O_CREAT|O_TRUNC,777);
	
	dup2(fd,1);

	printf("Hello World!!");
	close(fd);
}
