#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// Match Score

typedef struct match {
	char name[50];
	int runs;
	struct match *next;
} Match;

Match scan_score(Match* root){
	Match* temp = root;
	while(1){
		Match* current = malloc(sizeof(Match));
		printf("Enter the name of the player:\n");
		fgets(current->name,50,stdin);

		printf("Enter the runs of the current player:\n");
		scanf("%d%*c",&current->runs);
		printf("Do you want to continue?\n");
		temp->next = current;
		temp = temp->next;
		if( getchar() == 'n' ) break;
		getchar();
	}
	
	return *root;
}

void print_score(Match* root){
	
	while(root != NULL){
		printf("\n--------------------------\n");

		printf("The name of the player is %s\n",root->name);
		printf("The runs of the player is %d\n",root->runs);
		root = root->next;
	}

}

void main(){
	Match root;
	
	root = scan_score(&root);
	print_score(root.next);

}


