#include<stdio.h>
#include<stdlib.h>
#include<sys/msg.h>
#include<sys/ipc.h>

int main(){

	struct msqid_ds buf;
	int msgid = msgget(55,IPC_CREAT|0777);

	msgctl(msgid,IPC_STAT,&buf);
printf("Here are the details of Queue\n");
	printf("No of msg's in queue %d\n",buf.msg_qnum);
	printf("No of bytes in queue %d\n",buf.msg_cbytes);

	msgctl(msgid,IPC_RMID,NULL);

	return 0;
}


