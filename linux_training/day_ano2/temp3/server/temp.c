#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

#define BUF_LEN 256

void toggleCase(char* buff,int cnt);

int main(){

	int srvFd;
	int cliFd;
	char buff[BUF_LEN];
	int cnt;

	while(1){
		printf("\nWaiting for client to connect:\n");
		srvFd = open("srvfifo",O_RDONLY);

		if(srvFd < 0){
				if(mkfifo("srvfifo",600) < 0){
					printf("\nError creating file\n");	
					return 1;
				}else {
					printf("\nCreated a FIFO\n");
					srvFd = open("srvfifo",O_RDONLY);
				}
			}
		printf("Connected to client");

		while(1){
			cnt = read(srvFd,buff,BUF_LEN);

			if(cnt == 0) break;
			printf("\nMessage Received\n");
			toggleCase(buff,cnt);

			cliFd = open("clififo",O_WRONLY);

			if(cliFd){
			printf("Send Response message");
			write(cliFd,buff,cnt);
			close(cliFd);
			}else {
			printf("\nCould not open client fifo\n");
			} 
		}
	
		close(srvFd);
	}
}

void toggleCase(char* buff , int cnt){
	int i;
	for(i = 0;i<cnt;i++){
		if(buff[i] >= 'A' && buff[i] <= 'Z') buff[i] += 0X20;
		else if( buff[i] >= 'a' && buff[i] <= 'z') buff[i] -= 0X20;
	}
}
