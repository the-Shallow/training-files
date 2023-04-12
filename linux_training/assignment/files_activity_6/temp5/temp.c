#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>

int main(){

	struct stat file_stat;

	if( stat("temp.c" , &file_stat) == -1 ) perror("stat");

	printf("Inode number : %lu\n",file_stat.st_ino);
	printf("File Mode : %o\n",file_stat.st_mode);
	printf("File Size : %ld\n",file_stat.st_size);

	return 0;
}
