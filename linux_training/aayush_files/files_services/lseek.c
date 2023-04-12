//lseek command: used to rewind current file offset to (0 location) start point in file "linux_kernel.txt" 
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	int fd,len;
	char write_buf[50]="Hi,how are you?,wow?";
	char read_buf[50];

	fd = open("linux_kernel.txt",O_CREAT|O_RDWR,777);

	len = write(fd,write_buf,50);

	printf("return value from write option = %d\n",len);

	lseek(fd,5,SEEK_SET);

	read(fd,read_buf,len);

	printf("data from buffer(read option) = %s\n",read_buf);

	close(fd);

	return 0;

}
