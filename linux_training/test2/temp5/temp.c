#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main(){

	execl("/bin/ls","ls","-l",NULL);

	printf("Done..\n");
	return 0;
}
