#include<stdio.h>
#include<fcntl.h>
#define BUFF_SIZE 1024

int main(){

	int inputFd,outputFd,openFlags;
	mode_t filePerms;
	ssize_t numRead;
	char buff[BUFF_SIZE];

	inputFd = open("file1.txt",O_RDONLY);

	outputFd = open("file2.txt",O_RDWR,777);

	while((numRead = read(inputFd,buff,BUFF_SIZE)) > 0){
		if(write(outputFd,buff,numRead) != numRead) {
			printf("\nWrite Error\n");
			return;
		}

		printf("%d\n",numRead);
	}

	close(inputFd);
	close(outputFd);
}
