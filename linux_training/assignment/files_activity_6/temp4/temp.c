#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>


#define BUFF_SIZE 1024

int main(){

	char* filename = "file.txt";

	int fd;

	fd = open(filename,O_WRONLY | O_CREAT | O_TRUNC ,S_IRUSR | S_IWUSR);

	if(lseek(fd,4096,SEEK_END) == -1) perror("lseek");

	char* more_data = "GoodBye!!";

	write(fd,more_data,strlen(more_data));

	close(fd);

	return 0;
}
