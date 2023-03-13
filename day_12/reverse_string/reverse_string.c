#include<stdio.h>
#include<string.h>

// Reverse String

void reverse(char* word,int k){

	for(int i = 0;i<strlen(word);i+=2*k){
		int low = i,end = ( (i+k-1 < strlen(word)-1) ?  i+k-1 : strlen(word)-1 );

		while(low < end){
			char temp = word[low];
			word[low++] = word[end];
			word[end--] = temp;
		}
	}

}

void main(){

	char str[50];
	int k;
	printf("Enter the string:\n");
	fgets(str,50,stdin);

	printf("Enter the value of k:");
	scanf("%d",&k);
	str[strlen(str)-1] = '\0';
	reverse(str,k);

	printf("\nThe Reversed String is %s\n",str);

}
