#include<stdio.h>

// Check if a character is a uppercase / lowercase / digit

void main(){
	char ch;

	printf("Enter the value of character: ");
	scanf("%c",&ch);

	printf( (ch >= 'A' && ch <= 'Z') ? "uppercase\n" : (ch >= 'a' && ch <= 'z' ) ? "lowercase\n" : "digit\n"  );
}
