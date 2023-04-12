#include<stdio.h>
#include<fcntl.h>

int main()
{
	int fd1,fd2;

	fd1= open ("linux.txt",O_WRONLY|O_TRUNC|O_CREAT,0777);
	
	printf("Original FD is %d\n",fd1);

	fd2= fcntl (fd1,F_DUPFD,55);

	printf("duplicate value of fd1 is fd2 =%d\n",fd2);

	close(fd1);
	close(fd2);

	return 0;
}
