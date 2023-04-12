#include<stdio.h>

int main(int argc, char *argv[])
{
	int i;
	printf("\n File name : %s\n",argv[0]);
	printf("\n Total number of Arguments : %d",argc);
	printf("\n Arguments passed :");
	for(i=1;i<argc;i++)
	{
	printf("%s\t",argv[i]);
	 printf("\n");
	}
	
}

