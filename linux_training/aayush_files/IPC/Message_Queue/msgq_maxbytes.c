#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>

#define KEY 8979

int main()
{
	int qid;
	struct msqid_ds buf;
	//qid = msgget(KEY,IPC_CREAT);
	qid = msgget(55,IPC_CREAT|0644);
	printf("qid = %d\n",qid);
	msgctl(qid,IPC_STAT,&buf);
	printf("Here are the details of Queue\n");
	printf("No of msg's in queue %d\n",buf.msg_qnum);
	printf("No of bytes in queue %d\n",buf.msg_cbytes);
	return 0;

}
