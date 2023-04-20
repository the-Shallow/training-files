#include<stdio.h>
#include<stdlib.h>
#include<signal.h>

void check_blocked(sigset_t s){

	sigprocmask(SIG_BLOCK,NULL,&s);
	for(int i = 1;i<20;i++){
		if( sigismember(&s,i) ){
			printf("Signal is blocked\n");
		}else {
			printf("Signal is unblocked\n");
		}
	}
}

int main(){

	sigset_t s1,s2;

	sigemptyset(&s1);

	sigaddset(&s1,1);

	sigprocmask(SIG_BLOCK,&s1,NULL);

	printf("Give signal 1 and see\n");

	sigispending(&s2);

	check_blocked(s2);

	sigprocmask(SIG_UNBLOCK,&s1,NULL);

	check_blocked(s1);

	return 0;
	 
}
