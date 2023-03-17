#include<stdio.h>
#include<string.h>
#include<fcntl.h>

int main(){

	int fd;
	char* write_buff = "Hello World!!\0";
	char *read_buff = (char *) calloc(100, sizeof(char));

	fd = open("file.txt",O_CREAT|O_RDWR,777);

	write(fd,write_buff,strlen(write_buff));

	lseek(fd,0,SEEK_SET);
	read(fd,read_buff,600);
	
	printf("\nread_buff == %s\n",read_buff);

	close(fd);
}
