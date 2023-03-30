#include<stdio.h>
#include<string.h>

void copy(char* dest , char* src){

	for( int i = 0;i<strlen(src);i++ ){
		dest[i] = src[i];
	}

	dest[strlen(src)] = '\0';
}


void main(){

	char src[50],dest[50];

	printf("Enter the string:");
	fgets(src,50,stdin);

	copy(dest,src);
	
	printf("The value of dest is %s",dest);
}
