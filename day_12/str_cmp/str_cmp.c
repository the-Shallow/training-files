#include<stdio.h>
#include<string.h>

int compare(char* str1 , char* str2){

	for(int i = 0;i<( strlen(str1) <= strlen(str2) ? strlen(str1) : strlen(str2)) ;i++){
		if( str1[i] != str2[i] ) return str1[i] - str2[i];
	}

	return 0;
}


void main(){

	char str1[50],str2[50];

	printf("Enter the string 1:\n");
	fgets(str1,50,stdin);

	printf("Enter the string 2:\n");
	fgets(str2,50,stdin);

	int diff = compare(str1,str2);

	diff == 0 ? printf("\nBoth the strings are same\n") : printf("\nStrings are not same\n");

}
