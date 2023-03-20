#include<stdio.h>
#include<fcntl.h>

int main(){

	int fd = open("file.txt",777);
	
	printf("\nfd3==%d\n",fd);

	while(1);
}
