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

	char* data = "Hello World!!";

	write(fd,data,strlen(data));

	close(fd);

	fd = open(filename,O_RDWR);

	char buff[BUFF_SIZE];

	int bytes_read = read(fd,buff,BUFF_SIZE);

	write(1,buff,bytes_read);

	if(lseek(fd,0,SEEK_SET) == -1) perror("lseek");

	char* more_data = "GoodBye!!";

	write(fd,more_data,strlen(more_data));

	close(fd);

	return 0;
}
