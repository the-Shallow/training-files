#include<stdio.h>
#include<stdlib.h>

int main(){

	int fds[2],i,n;
	char readbuff[100];
	char writebuff[100];

	if(pipe(fds) < 0){
		printf("Pipe Creation Failed");
		exit(1);
	}

	if(fork() == 0){
		close(fds[1]);
		while(1){		
			n = read(fds[0],readbuff,100);
			printf("\nRead from fds[0] nd output to screen:\n");
			for(i = 0;i<n;i++){
				readbuff[i] = toupper(readbuff[i]);	
			}
			puts(readbuff);		
		}
	}

	close(fds[0]);
	while(1){
		fgets(writebuff,100,stdin);
		write(fds[1],writebuff,strlen(writebuff)+1);
		printf("\nWrote to fds[1]\n");
	}	

	return 0;
}
