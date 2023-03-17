#include<stdio.h>
#include<fcntl.h>
#define BUFF_SIZE 1024

int copy(char* file1,char* file2){

	int inputFd,outputFd,openFlags;
	mode_t filePerms;
	ssize_t numRead;
	char buff[BUFF_SIZE];

	inputFd = open(file1,O_RDONLY);

	outputFd = open(file2,O_RDWR,777);
	
	lseek(inputFd,0,SEEK_SET);
	lseek(outputFd,0,SEEK_SET);
	while((numRead = read(inputFd,buff,BUFF_SIZE)) > 0){
		if(write(outputFd,buff,numRead) != numRead) {
			printf("\nWrite Error\n");
			return;
		}

		printf("%d\n",numRead);
	}

	close(inputFd);
	close(outputFd);

	return 1;
}

int main(int argc , char* argv[] ){
	for(int i = 2;i<argc;i++){
		printf("file1 == %s\n",argv[1]);
		printf("file2 == %s\n",argv[i]);
		copy(argv[1],argv[i]);
	}

	return 1;
}
