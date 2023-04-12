#include<stdio.h>
#include<stdlib.h>
#include<signal.h>

void sighand(int signum){
	printf("I have to wake up my boss now\n");
	alarm(5);
}

int main(){

	signal(SIGALRM,sighand);
	alarm(5);
	printf("\nHello\n");
	while(1){}
}
