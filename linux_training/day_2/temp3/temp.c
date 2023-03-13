#include<stdio.h>
#include<stdlib.h>


void main(int argc , char* argv[]){

	printf("%s\n",argv[0]);

	printf("\nTotal Number of arguments are:%d\n",argc);

	for(int i = 0;i<argc;i++)  printf("\n%s\n",argv[i]);
}

