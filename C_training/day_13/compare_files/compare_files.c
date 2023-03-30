#include<stdio.h>
#include<stdlib.h>

// Compare two files

void main(){

	FILE *fp1,*fp2;

	fp1 = fopen("test1.txt","r");
	fp2 = fopen("test2.txt","r");
	
	char ch1,ch2;
	while( ch1 != EOF || ch2 != EOF ) {
		ch1 = getc(fp1);
		ch2 = getc(fp2);
  
		if( ch1 > ch2 || ch1 < ch2 ) {
			printf("\nFiles are not same\n");
			return;
		}
	}

	fclose(fp1);
	fclose(fp2);

	printf("\nFILES are same\n");

}

