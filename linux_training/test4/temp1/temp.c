#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<fcntl.h>

int main(){
	int fd;

	fd = open("file1.txt",O_RDONLY);

	char buff[150];

	read(fd,buff,150);
	buff[strlen(buff)] = '\0';
	fd = open("file2.txt",O_WRONLY,0777);

	write(fd,buff,strlen(buff));

	printf("Write Data is %s\n",buff);

	return 0;
	
}

