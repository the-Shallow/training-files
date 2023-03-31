#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

#define BUF_LEN 256

int main(){

	int srvFd;
	int cliFd;
	char txmsg[BUF_LEN];
	char rxmsg[BUF_LEN];
	int cnt;
	
	srvFd = open("srvfifo",O_WRONLY);

	if(!srvFd){
		printf("Error in opening srvfd");
		return 1;
	}

	printf("\nConnected to server\n");
	printf("\nEnter some message to send to server\n");
	fgets(txmsg,BUF_LEN,stdin);
	

	write(srvFd,txmsg,strlen(txmsg)+1);

	printf("\nSent message to server\n");
	
	cliFd = open("clififo",O_RDONLY);

	if(cliFd < 0){
		if(mkfifo("clififo",600)){
			printf("\nError creating clififo\n");
			return 1;
		}else {
			cliFd = open("clififo",O_RDONLY);
			printf("\nCreated client FIFO\n");	
		}	
	}

	printf("\nwaiting from response from server\n");
	cnt = read(cliFd,rxmsg,BUF_LEN);
	puts(rxmsg);
	close(srvFd);
	close(cliFd);
}
