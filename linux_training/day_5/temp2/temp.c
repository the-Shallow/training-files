#include<stdio.h>
#include <fcntl.h>

int main(){
	int fd;

	fd = open("file.txt",O_RDONLY,664);

	printf("fd == %d\n",fd);

	char *buff = (char *) calloc(100, sizeof(char));
	read(fd,buff,600);

	printf("\nbuff == %s\n",buff);
  




}
