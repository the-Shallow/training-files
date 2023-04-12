#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ret;
	printf("I am going to exec an 'ls' program\n");
	ret = execlp("ls","ls","-l",0);

	printf("i executed ls program %d\n",ret);
	printf("i executed ls program %d\n",ret);
	printf("i executed ls program %d\n",ret);

}
