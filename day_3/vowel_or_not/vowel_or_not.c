#include<stdio.h>

// Check if the given character is vowel or not

int check_vowel(char ch){
	switch(ch){
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':return 1;
	}

	return 0;
}

void main(){
	char ch;

	printf("Enter the character:");
	scanf("%c",&ch);
	
	check_vowel(ch) ? printf("\nThe given character is vowel\n") : printf("\nThe given character is not vowel\n");
}
