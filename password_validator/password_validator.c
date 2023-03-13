#include<stdio.h>
#include<string.h>

// Validate the password


int has_space(char* password){

	for(int i = 0;i<strlen(password);i++){
		if( password[i] == ' ' ) return 1;
	}

	return 0;
}

int is_password_16_character(char* password){
	return strlen(password) >= 16;
}


int has_digit(char* password){
	
	for( int i = 0;i<strlen(password);i++ ){
		if( password[i] >= '0' && password[i] <= '9' ) return 1;
	}

	return 0;
}

int has_special_character(char* password){
	
	for( int i = 0;i<strlen(password);i++ ){
		int ascii =  password[i] ;
		if( (ascii >= 32 && ascii <= 47) || (ascii >= 58 && ascii <= 64) || (ascii >= 91 && ascii <= 96) || (ascii >= 123 && ascii <= 126)  ) return 1;
	}

	return 0;
}

int has_lowercase_character(char* password){
	for(int i = 0;i<strlen(password);i++){
		if( password[i] >= 'a' && password[i] <= 'z' ) return 1;
	}

	return 0;
}

int has_uppercase_character(char* password){
	for(int i = 0;i<strlen(password);i++){
		if( password[i] >= 'A' && password[i] <= 'Z' ) return 1;
	}

	return 0;
}

int is_valid_password(char* password){

	if( has_space(password) ) return 0;
	if( !is_password_16_character(password) ) return 0;
	if( !has_digit(password) ) return 0;
	if( !has_special_character(password)) return 0;
	if( !has_lowercase_character(password) ) return 0;
	if( !has_uppercase_character(password) ) return 0;

	return 1;
}


void main(){

	char password[17];

	printf("Enter the 16 character password:");
	fgets(password,17,stdin);

	is_valid_password(password) ? printf("\nPassoword is valid\n") : printf("\nPassoword is not valid\n");

}
