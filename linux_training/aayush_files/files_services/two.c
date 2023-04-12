#include<stdio.h>
#include<fcntl.h>

int main()
{
	int fd;

	fd=open("filex.txt",O_RDWR,777);

	printf("%d\n",fd);
	while(1);

	close(fd);
	return 0;

}
