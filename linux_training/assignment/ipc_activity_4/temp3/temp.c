#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<sys/stat.h>


#define FIFO_NAME "file"

int main(){

	int fd;
	char buff[1024];

	mkfifo(FIFO_NAME,0666);

	fd = open(FIFO_NAME,O_WRONLY);

	strcpy(buff,"KHUSH HERE");

	write(fd,buff,strlen(buff)+1);

	close(fd);

	fd = open(FIFO_NAME,O_RDONLY);

	read(fd,buff,1024);

	printf("Recieved Message is %s\n",buff);

	close(fd);

	unlink(FIFO_NAME);

	return 0;
}


