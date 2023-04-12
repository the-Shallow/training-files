#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/types.h>


int main(){

	char buff[10];
	int fd = open("file.txt",O_RDONLY);

	lseek(fd,0,SEEK_SET);

	read(fd,buff,10);

	printf("The data is %s\n",buff);

	lseek(fd,2,SEEK_CUR);

	read(fd,buff,10);

	printf("The data is %s\n",buff);

	lseek(fd,-5,SEEK_END);


	read(fd,buff,10);

	printf("The data is %s\n",buff);

	return 0;	
	
}
