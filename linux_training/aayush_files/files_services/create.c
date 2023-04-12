#include<stdio.h>
#include<fcntl.h>

int main()
{
	int fd1,fd2,fd3;

	fd1=creat("linux00.txt",777);
	
	fd2=creat("linux11.txt",777);

	fd3=creat("linux22.txt",777);

	printf("fd for Linux00.txt = %d\n",fd1);
	printf("fd for Linux11.txt = %d\n",fd2);
	printf("fd for Linux22.txt = %d\n",fd3);

	close(fd1);
	close(fd2);
	close(fd3);

	return 0;
}

