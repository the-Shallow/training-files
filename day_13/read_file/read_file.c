#include<stdio.h>
#include<stdlib.h>


void main(){

	FILE *fp;
	fp = fopen("temp_file.txt","r");
	char ch;
	do{
		ch = getc(fp);
		printf("%c",ch);
	}while(ch != EOF);

}
