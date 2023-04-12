#include<stdio.h>
#include<signal.h>

void sigHandler(int sigNo){

	printf("Signal Handler function...\n");
}

int main(){
	printf("PID of the process is %d\n",getpid());
	struct sigaction act;
	act.sa_handler = sigHandler;
	act.sa_flags = 0;
	sigemptyset(&act.sa_mask);
	sigaction(SIGINT,&act,0);

	while(1){
		printf("Hello World\n");
		sleep(1);	
	}
}
