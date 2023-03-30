#include<stdio.h>
#include<stdlib.h>

// Binary Tree

typedef struct node {
	int data;
	struct node* left;
	struct node* right;
} Node;

Node* get_node(int data){

	Node* node = (Node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return node;
}

int get_height(Node* root){

	if(root == NULL) return 0;

	int left = get_height(root->left);
	int right = get_height(root->right);

	return left > right ? left + 1 : right + 1;
}

int is_balanced(Node* root){

	if(root == NULL) return 0;

	int left = is_balanced(root->left);
	int right = is_balanced(root->right);

	if(left == -1 || right == -1) return -1;
	
	int diff = left > right ? left - right  : right - left;

	return diff > 1 ? -1 : ( left > right ? left + 1 : right + 1 ); 

}

Node* search(Node* root , int data){
	if(root == NULL) return NULL;
	if(root->data == data) return root;
	
	if( root->data >= data )return  search(root->left,data);
	else return search(root->right,data);
}


Node* delete_search(Node* prev , Node* root,  int data){
	if(root == NULL) return NULL;
	if(root->data == data) return prev;
	
	if(root->data >= data) return delete_search(root,root->left,data);
	else return delete_search(root,root->right,data);
}

Node* create_node(Node* root , Node* newNode){
		
	if(root == NULL) return newNode;

		if( root->data >= newNode->data  ){
			root->left = create_node(root->left,newNode);
			
		}else {
			root->right = create_node(root->right,newNode);
		}

	return root; 
}

Node* delete(Node* root, int data){

	Node* temp = delete_search(NULL , root, data);


	if(temp == NULL){
		if(root->left == NULL && root->right == NULL) return NULL;
		if( root->right == NULL && root->left != NULL){
			root = root->left;
		}else if(root->left == NULL && root->right != NULL){
			root = root->right;
		}else {
			temp = root->right;
			Node* curr = temp;
			while(curr->left != NULL){
				temp = curr;
				curr = curr->left;  
			}

			if(curr == temp){
				root->data = curr->data;
				root->right = NULL;
			}else {
				root->data = curr->data;
				temp->left = NULL;
			}
		}		
	}else {
		Node* curr = NULL;
		if(temp->left->data == data) curr = temp->left;
		else if(temp->right->data == data) curr = temp->right;

		if(curr->left == NULL && curr->right == NULL) {
			if(temp->left == curr) temp->left = NULL;
			else temp->right = NULL;
		}else if(curr->left == NULL && curr->right != NULL){
			if(temp->left == curr) temp->left = curr->right;
			else temp->right = curr->right;	
		}else if(curr->left != NULL && curr->right == NULL){
			if(temp->left == curr) temp->left = curr->left;
			else temp->right = curr->left;
		}else {
			Node* temp1 = curr->right;
			Node* temp2 = temp1;
			
			while(temp2->left != NULL){
				temp1 = temp2;
				temp2 = temp2->left;
			}
			
			if(temp1 == temp2){
				curr->data = temp2->data;
				curr->right = NULL;			
			}else {
				curr->data = temp2->data;
				temp1->left = NULL;		
			}
	
		}
	}	

	return root;
}

Node* mirror(Node* root){

	if(root == NULL) return NULL;
	Node* left = mirror(root->left);
	Node* right = mirror(root->right);

	root->left = right;
	root->right = left;
	
	return root;
	
}

int get_min(Node* root){

	if(root->left == NULL) return root->data;

	return get_min(root->left);
}

int get_max(Node* root){

	if(root->right == NULL) return root->data;

	return get_max(root->right);
}

void display(Node* root){

	if(root == NULL) return;
	
	printf("%d->", root->data);
	display(root->left);
	display(root->right);

	return;
}

void main(){

	int choice;

	Node* root = NULL;

	while(1){

		printf("\n1.Enter the element\n");
		printf("\n2.Delete an element\n");
		printf("\n3.Height of the tree\n");
		printf("\n4.Is Tree balanced?\n");
		printf("\n5.Mirror image of the tree\n");
		printf("\n6.Minimum Value of the tree\n");
		printf("\n7.Maximum value of the tree\n");
		printf("\n8.Display Tree\n");

		printf("\nEnter the choice:\n");
		scanf("%d",&choice);

		switch(choice){
			case 1:{
				printf("\nEnter the value of the node\n");
				int item;
				scanf("%d",&item);
				Node* newNode = get_node(item);
				root = create_node(root,newNode);
				break;
			}

			case 2:{
				printf("\nEnter the element to be deleted:\n");
				int item;
				scanf("%d",&item);

				root = delete(root,item);
				break;
			}

			case 3:{
				printf("\nThe Height of the tree is %d\n",get_height(root));
				break;
			}

			case 4:{
				int balance = is_balanced(root);

				balance >= 0 ? printf("\nTree is balanced\n") : printf("\nTree is not balanced\n");
				break;
			}

			case 5:{
				root = mirror(root);
				break;
			}

			case 6:{
				printf("\nThe Minimum value of the tree is %d\n",get_min(root));
				break;
			}

			case 7:{
				printf("\nThe Maximum value of the tree is %d\n",get_max(root));
				break;
			}

			case 8:{
				display(root);
				printf("NULL");
				break;
			}
		}		

		printf("\nDo you want to continue?\n");
		char ch;
		scanf(" %c",&ch);
		if(ch == 'n') break;
	}


}
