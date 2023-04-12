#include<stdio.h>
#include<signal.h>

void check_blocked_sigs(){
	int i,res;
	sigset_t s;
	sigprocmask(SIG_BLOCK,NULL,&s);
	for(i = 1;i<10;i++){
		res = sigismember(&s,i);
		if(res){
			printf("signal %d is blocked\n",i);		
		}else {
			printf("signal %d is unblocked\n",i);		
		}
	}
}


int main(){

	sigset_t s_set;
	sigemptyset(&s_set);
	sigaddset(&s_set,1);
	sigaddset(&s_set,9);
	
	sigaddset(&s_set,4);
	
	sigprocmask(SIG_BLOCK,&s_set,NULL);
	
	check_blocked_sigs();
	sigprocmask(SIG_UNBLOCK,&s_set,NULL);
	check_blocked_sigs();

	return 0;
}
