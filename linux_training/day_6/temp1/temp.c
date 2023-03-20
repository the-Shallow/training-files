#include<stdio.h>
#include<fcntl.h>

int main(){

	int fd1,fd2,fd3,fd4;

	fd1=open("file1.txt",O_WRONLY|O_CREAT|O_TRUNC,777);
	fd2=open("file2.txt",O_WRONLY|O_CREAT|O_TRUNC,777);

	printf("\nfd1 == %d\n",fd1);
	fd3 = dup(fd1);

	printf("\nf3 == %d\n",fd3);

	close(fd1);
	close(fd2);
	close(fd3);
}
