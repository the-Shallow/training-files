#include<stdio.h>
#include<fcntl.h>

int main(){

	int fd1,fd2,fd3;

	fd1 = creat("file1.txt",777);
	fd2 = creat("file2.txt",777);
	fd3 = creat("file3.txt",777);

	printf("fd1 == %d\n",fd1);
	printf("fd2 == %d\n",fd2);
	printf("fd3 == %d\n",fd3);
}
