#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

#define BUF_LEN 256

void togglecase(char *buf,int cnt);

int main()
{
	int srvFd;
	int cliFd;
	char buf[BUF_LEN];
	int cnt;

	while(1)
	{
		printf("Waiting for connection to client\n");
		srvFd = open("srvfifo",O_RDONLY);
		if(srvFd<0)
		{
			if(mkfifo("srvfifo",0660)<0)
			{
				printf("Error in creating FIFO\n");
				return(1);
			}
			else
			{
				printf("Created FIFO\n");
				srvFd = open("srvfifo",O_RDONLY);
			}
		}
	
		printf("Connected to client through FIFO\n");
		while(1)
		{
			cnt = read(srvFd,buf,BUF_LEN);
			if(cnt==0)
			{
				break;
			}
			printf("Received Messages\n");
			togglecase(buf,cnt);
			cliFd = open("clififo",O_WRONLY);
			if(cliFd)
			{
				printf("Sent response message\n");
				write(cliFd,buf,cnt);
				close(cliFd);
			}
			else
			{
				printf("Could not open client fifo\n");
			}
		}
		close(srvFd);
	}
	
}

void togglecase(char *buf,int cnt)
{
	int ii;
	for(ii=0;ii<cnt;ii++)
	{
		if((buf[ii] >='A') && (buf[ii] <= 'Z'))
		{
			buf[ii] += 0x20;
		}
		else if((buf[ii] >= 'a') && (buf[ii] <= 'z'))
		{
			buf[ii] -= 0x20;
		}
	}
}
