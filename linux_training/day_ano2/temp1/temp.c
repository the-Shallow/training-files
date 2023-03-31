#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int main(){

	int p[2];

	pipe(p);

	printf("\nRead end of a pipe = %d \t Write end of pipe = %d\n",p[0],p[1]);

	if(fork()){
		char s[20];

		printf("\nIn parent \n");

		scanf("%s",s);

		write(p[1],s,strlen(s)+1);
	}else {
		char buff[20];

		printf("\nIn child\n");
		read(p[0],buff,sizeof(buff));
		printf("\nChild printing data ... %s\n",buff);
	}

	return 0;
}
