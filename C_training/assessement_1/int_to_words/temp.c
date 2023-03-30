#include<stdio.h>
#include<string.h>


void main(){

	char input[100];

	printf("\nEnter the string:\n");
	fgets(input,100,stdin);

	printf("%ld",strlen(input));

}
