#include<stdio.h>
#include<string.h>
#include<unistd.h>

int main()
{
	int p[2];

	pipe(p);

	printf("Read end of Pipe = %d\t Write end of pipe = %d\n",p[0],p[1]);//fd=3,fd=4

	if(fork())
	{
		//parent 
		char s[20];
		printf("In parent enter data...\n");
		scanf("%s",s);
		write(p[1],s,strlen(s)+1);
	}
	else
	{
		//child i.e 0

		char buf[20];
		printf("In chlid...\n");
		read(p[0],buf,sizeof(buf));
		printf("Child Pro printing .... Data of the parent process...%s\n",buf);
	}
	return 0;
}



//pipe used between paernt and child process using fork();
