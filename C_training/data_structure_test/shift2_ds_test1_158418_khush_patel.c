#include<stdio.h>
#include<stdlib.h>

// Sort the LinkedList

typedef struct node {

	int data;
	struct node* next;

} Node;

Node* search(Node* head , int data){

	while(head != NULL){
		if( head->data == data) return head;
		head = head->next;
	}

	return NULL;
}


Node* get_node(int data){

	Node* temp = (Node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	return temp;
}

Node* insert_head(Node* newHead,Node* head){

	if(head == NULL){
		return newHead;
	}else {
		newHead->next = head;
	}

	return newHead;
}

Node* insert_middle( Node* newNode , Node* head , int data ){

	Node* curr = search(head , data);

	if( curr == NULL ) return head;

	newNode->next = curr->next; 
	curr->next = newNode;
	return head;	
}

Node* insert_last(Node* newNode , Node* head){
	Node* temp = head;
	while(temp->next != NULL) temp = temp->next;

	temp->next = newNode;
	return head;
}


Node* delete(int data , Node* head){
	Node* prev = NULL;
	Node* temp = head;

	while(temp->data != data){
		prev = temp;
		temp = temp->next;
	}

	if( prev == NULL ){
		return head->next;
	}else {
		prev->next = temp->next;
		free(temp);
	}

	return head;
}

Node* sort(Node* head){

	Node* curr = head;

	while(curr != NULL){
		Node* temp = curr;
		Node* smallest = curr;
		while(temp != NULL){
			if(temp->data < smallest->data) smallest = temp;
			temp = 	temp->next;
		}

		int temp1 = curr->data;
		curr->data = smallest->data;
		smallest->data = temp1;
		curr = curr->next;
		
	}

	return head;
}


void display(Node* head){

	while(head != NULL){
		printf("%d->",head->data);
		head = head->next;
	}

	printf("NULL\n");
}



void main(){

	int choice;
	
	Node* head = NULL;

	while(1){
		printf("\n1.Insert an element at the head\n");
		printf("\n2.Insert in the middle\n");
		printf("\n3.Insert at last\n");
		printf("\n4.Delete an element\n");
		printf("\n5.Sort the linked list\n");
		printf("\n6.Display\n");

		printf("\nEnter the choice\n");
		scanf("%d",&choice);

		switch(choice){
			case 1:{
				int item;
				printf("\nEnter the element:\n");
				scanf("%d",&item);
				Node* newNode = get_node( item );
				head = insert_head(newNode,head);
				break;
			}

			case 2:{
				int item,data;
				printf("\nEnter the element\n");
				scanf("%d",&item);
				printf("\nEnter the data you want to insert after\n");
				scanf("%d",&data);
				Node* newNode = get_node(item);
				head = insert_middle(newNode,head,data);
				break;
			}

			case 3:{
				int item;
				printf("\nEnter the element:\n");
				scanf("%d",&item);
				Node* newNode = get_node(item);
				head = insert_last(newNode,head);
				break;
			}

			case 4:{
				int item;
				printf("\nEnter the value of the element to be deleted:\n");
				scanf("%d",&item);
				head = delete(item,head);
				break;
			}

			
			case 5:{
				head = sort(head);
				break;
				}


			case 6:{
				display(head);
				break;
			}
		}

		printf("\nDo you want to continue?\n");
		char ch;
		scanf(" %c",&ch);
		if(ch == 'n') break;
	}

}
