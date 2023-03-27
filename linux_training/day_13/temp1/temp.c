#include<stdio.h>
#include<stdlib.h>

int main(){
	printf("Hello");
	execlp("ls","-l",0);
}
