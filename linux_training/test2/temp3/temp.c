#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include<sys/types.h>

int main(){
	int fd = open("file.txt",O_RDONLY);

	char* c;
	struct stat s;
	fstat(fd,&s);

	c = mmap(0,s.st_size,PROT_READ,MAP_PRIVATE,fd,0);

	for(int i = 0;i<5;i++){
		printf("%s\n",c);
	}

	return 0;
}
