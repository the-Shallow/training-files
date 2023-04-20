#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>

int main()
{
	int qid;
	qid = msgget(555,IPC_CREAT|644);
	printf("qid =%d\n",qid);
	getchar();
	msgctl(qid,IPC_RMID,NULL);
}

//Write a program that creates message queue and display msg queue id and remove the allocated message queue from system
