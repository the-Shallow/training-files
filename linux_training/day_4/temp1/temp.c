#include<stdio.h>
#include<fcntl.h>

int main(){

	int fd1,fd2,fd3;

	fd2 = open("file.txt",O_WRONLY,777);

	printf("%d\n",fd2);
	
	//close(fd2);
}


