#include<stdio.h>
#include<stdlib.h>
#include<string.h>


char* concatString(char* dest , char* src){
    char destination[1000];
    char source[1000];
    strncpy(destination,"",strlen(destination));
    strncpy(source,"",strlen(source));
    
    int k = 0;
    for(int i = 0;i<strlen(dest);i++){
        destination[k++] = dest[i];
    }
    
    if(strlen(destination) > 0){
        strcat(destination," ");
        k++;
    }
    
    for(int i = 0;i<strlen(src);i++){
        destination[k++] = src[i];
    }
    
    destination[k] = '\0';
    char* temp = (char*)malloc(sizeof(destination));
    for(int i = 0;i<strlen(destination);i++){
        temp[i] = destination[i];
    }
    
    return temp;
}

char* get_substring(int pos , int end,char* s){

    char* word = (char*)malloc(sizeof(s));
    strcpy(word,s);
	char* substring = (char*)malloc(sizeof(s));
  
	int h = 0;
	while( word[pos] != '\0' && pos < end ) substring[h++] = word[pos++];

	substring[h] = '\0';
	return substring;
}

void helper(char* s,int curr_score,char* validString,int curr_pointer){

	if(strlen(s) == 0 && curr_score == 0){
		strcpy(res[k++],validString);
		return;
	}

	char s1[100];
	char s2[100];

	
}

void main(){

	char input[100];

	printf("\nEnter the string:\n");
	scanf("%s",input);

}
