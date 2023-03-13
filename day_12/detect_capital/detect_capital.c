#include<stdio.h>
#include<string.h>

// Detect Capital


int is_all_capital(char* word){

	for(int i = 0;i<strlen(word);i++){
		if( !(word[i] >= 'A' && word[i] <= 'Z')  ) return 0;
	}

	return 1;
}


int is_all_lower(char* word){

	for(int i = 0;i<strlen(word);i++){
		if( !(word[i] >= 'a' && word[i] <= 'z')  ) return 0;
	}

	return 1;
}



int is_only_first_capital(char* word){
	for(int i = 1;i<strlen(word);i++) {
		if( word[i] >= 'A' && word[i] <= 'Z' ) return 0;
	}

	return 1;
}

void main(){

	char str[50];

	printf("Enter the string:");
	fgets(str,50,stdin);

	if( is_all_capital(str) || is_all_lower(str) || is_only_first_capital(str) ){
		printf("\nThe given word is capital\n");
		return;
	}

	printf("\nThe given is not capital\n");

}



