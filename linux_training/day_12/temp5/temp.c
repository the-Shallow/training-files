#include<stdio.h>
#include<stdlib.h>

int main(){

	char* args[3];

	args[0] = "ls";
	args[1] = "-l";
	args[2] = 0;

	execv("/bin/ls",args);
}
