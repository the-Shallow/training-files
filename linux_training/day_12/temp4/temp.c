#include<stdio.h>
#include<stdlib.h>

int main(){

	int ret;
	ret = execl("/bin/ls","ls","-l",0);

	printf("\nExecuted %d\n",ret);
	//printf("\nExecuted %d\n",ret);
	//printf("\nExecuted %d\n",ret);
}
