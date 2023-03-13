#include<stdio.h>
#include<string.h>


int get_length(char* word){
	int length = 0;

	while( word[length] != '\0' )length++;

	return length;
}


void main(){

	char word[50];

	printf("Enter the string:");
	fgets(word,50,stdin);

	printf("The length of the string is %d\n",get_length(word));
	printf("The length of the string is %lu\n",strlen(word));

}
