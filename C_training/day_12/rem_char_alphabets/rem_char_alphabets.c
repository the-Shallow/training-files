#include<stdio.h>
#include<string.h>


void rem_char_alphabets(char* word,char* res){
	
	for(int i = 0;i<strlen(word);i++){
		if( (word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z') ) {
			*res = word[i];
			res++;
		}
	}

	*res = '\0';
}

void main(){

	char str[50],res[50];

	printf("Enter the value of string:\n");
	fgets(str,50,stdin);

	rem_char_alphabets(str,res);
	printf("\nThe Updated string is %s\n",res);

}
