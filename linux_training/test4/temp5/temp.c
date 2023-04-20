#include<stdio.h>
#include<stdlib.h>
#include<signal.h>

void check_blocked(){

	sigset_t s;
	sigprocmask(SIG_BLOCK,NULL,&s);

	for(int i = 1;i<=20;i++){
		if(sigismember(&s,i)){
			printf("Signal %d is blocked\n",i);
		}else {
			printf("Signal %d is unblocked\n",i);
		}
	}
}

int main(){

	sigset_t s;
	sigfillset(&s);
	sigprocmask(SIG_BLOCK,&s,NULL);

	check_blocked();

	sigprocmask(SIG_UNBLOCK,&s,NULL);
	return 0;
}
