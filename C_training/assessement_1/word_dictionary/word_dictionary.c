#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int k = 0;
char words[1000][1000];

typedef struct node{

	char ch;
	int isEnd;
	struct node* children[26];
}Node;

Node* get_node(char ch){

	Node* node = (Node*)malloc(sizeof(Node));

	node->ch = ch;
	node->isEnd = 0;
	
	for(int i = 0;i<26;i++) node->children[i] = NULL;
	
	return node;
}

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
    // printf("pos == %d\n",pos);
    // printf("end == %d",end);
	int h = 0;
	while( word[pos] != '\0' && pos < end ) substring[h++] = word[pos++];

	substring[h] = '\0';
	return substring;
}

void create_trie(Node* root , char* word ){

	Node* temp = root;

	for(int i = 0;i<strlen(word);i++ ){
		char ch = word[i];
        // printf("%c\n",ch);
		if(temp->children[ch-'a'] == NULL) temp->children[ch-'a'] = get_node(ch);
		temp = temp->children[ch-'a'];
		
	}

	temp->isEnd = 1;

}



void helper(char* s , Node* root ,char* validString){

	Node* curr = root;
	if(strlen(s) == 0) {
		strcpy(words[k++],validString);
		return;
	}

	for(int i = 0;i<strlen(s);i++){
		char ch = s[i];
        
		if( curr->children[ch - 'a'] == NULL ) return;
        curr = curr->children[ch-'a'];
        
		if(curr->isEnd){
			char s1[1000];
			strcpy(s1,get_substring( i+1,strlen(s),s ));
// 			printf("s1 == \t");
// 			fputs(s1,stdout);
// 			printf("\n");
			char s2[1000];
			char s3[1000];
			strcpy(s3,concatString(get_substring(0,i+1,s) ,  " " ));
// 			printf("s3 == \t");
// 			fputs(s3,stdout);
// 			printf("\n");
			strcpy( s2 , concatString( validString , s3)  );
// 			printf("s2 == \t");
// 			fputs(s2,stdout);
// 			printf("\n");
			helper( s1,root,s2 );
		}
	}
}


void main(){

	int size;
	char s[100];
	char wordDict[100][100];

	Node* root = get_node(' ');
	printf("Enter the string S:\n");
	scanf("%s",s);

	printf("\nEnter how many strings are there in dictionary:\n");
	scanf("%d",&size);

	for(int i = 0;i<size;i++){
		printf("\nEnter the string:\n");
		scanf("%s",wordDict[i]);
	}
	
// 	for(int i = 0;i<size;i++){
// 		printf("%s\n",wordDict[i]);
// 	}


	for(int i = 0;i<size;i++){
		create_trie(root,wordDict[i]);
	}


	helper(s,root,"");
	
	for(int i = 0;i<k;i++) printf("%s\n",words[i]);
}


