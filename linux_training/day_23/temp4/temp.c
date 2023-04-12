#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void sighand(int sig_num){

	printf("Abort Signal rec'd\n");
	printf("We can use this to perform clean up op's\n");
}

int main(){

	signal(SIGABRT,sighand);
	printf("Some thing has gone wrong\n");
	abort();

	printf("Can you see this\n");
	printf("Can you see this\n");
	printf("Can you see this\n");
}
