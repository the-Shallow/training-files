#include<stdio.h>

int main()
{
	int ret;
	printf("I am going to exec command line args\n");
	ret= execl("/home/vboxuser/training-files/linux_training/aayush_files/Process_management/fork/cmd","./cmd","linux","kernel","driver",0);
	printf("i executed ls program %d\n",ret);
}
