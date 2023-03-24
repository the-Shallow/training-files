#include<stdio.h>

int main(){

	int id;
	int cnt = 0;
	printf("\nNew Process\n");
	id = fork();

	if(id){
		while(cnt < 10){
			cnt++;
			printf("\nParent here, Child is %d\n",id);
			sleep(1);
		}
	}else {
		while(cnt < 20){
			cnt++;
			printf("\nChild Here with ID %d\n",id);
			sleep(1);
		}
	}
}
