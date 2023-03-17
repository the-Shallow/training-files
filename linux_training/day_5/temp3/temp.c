#include<stdio.h>
#include<string.h>
#include <fcntl.h>

int main(){
	int fd;

	fd = creat("file.txt",777);

	printf("fd == %d\n",fd);

	char *buff = (char *) calloc(100, sizeof(char));
	strncpy(buff, "", sizeof(buff));
	buff = "Hello World!!\0";
	write(fd,buff,strlen(buff));

	printf("\nbuff == %s\n",buff);

}
