#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>

int main(){

	struct stat st;
	int fd;

	fd = open("temp.c",O_RDONLY);

	fstat(fd,&st);

	printf("\nsize == %lu\n",st.st_size);
	printf("\nInode == %lu\n",st.st_ino);

	close(fd);
}
