#include<stdio.h>
#include<string.h>

void concat(char* dest , char* src){
	int length = 0;
	while(dest[length] != '\n') length++; 
	
	for(int i = 0;i<strlen(src);i++){
		dest[length++] = src[i];
	}

	dest[length] = '\0';
}


void main(){

	char str1[50],str2[50];

	printf("Enter the string1:\n");
	fgets(str1,50,stdin);

	printf("Enter the string2:\n");
	fgets(str2,50,stdin);

	concat(str1,str2);

	printf("The Concated string is %s",str1);
}
