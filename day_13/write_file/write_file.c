#include<stdio.h>
#include<stdlib.h>


void main(){

	FILE *fp1,*fp2;
	fp1 = fopen("test1.txt","r");
	fp2 = fopen("test2.txt","w");
	char ch;
	do{
		ch = getc(fp1);
		putc(ch,fp2);
	}while(ch != EOF);

	fclose(fp1);
	fclose(fp2);
}
