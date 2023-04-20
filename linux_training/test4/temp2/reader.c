#include<stdio.h>
#include<string.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/msg.h>

struct msgbuf{
	long mtype;
	char data[512];
};

int main(int argc, char *argv[])
{
	struct msgbuf v;
	int id;
	
	if(argc!=2){
	printf("usage: ./msgrcv type \n");
	printf("Example: msgrcv 5\n");
	return 0;
	}
	
	id = msgget(55,IPC_CREAT|0644);
	if(id<0){
		perror("msgget");
		return 0;
	}
	msgrcv(id,&v,sizeof(v),atoi(argv[1]),IPC_NOWAIT);
	printf("\nData: %s\n",v.data);
	return 0;
}
