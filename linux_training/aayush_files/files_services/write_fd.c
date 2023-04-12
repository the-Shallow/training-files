#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	int fd,len;
	int x;
	char write_buf[60]="Linux kernel new program ?,wow ?";

	fd=open("linuxabc.txt",O_CREAT|O_RDWR,0777);
	
	printf("%d\n",fd);

	write(fd,write_buf,10);

	close(fd);
	return 0;
}

