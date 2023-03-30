#include<stdio.h>

int front = -1,rear = -1;

int is_full(int size){

	return (( front == 0 && rear == size - 1 ) || (front == rear + 1));
}

int is_empty(){
	return front == -1;
}


int insert_front(int queue[] , int element , int size){

	if(is_full(size)) return -1;

	if(front == -1){
		front = 0;
		rear = 0;
	}else if(front == 0){ 
		front = size - 1;
	}else {
		front = front - 1;
	}

	queue[front] = element;

	return 1;
}

int insert_rear(int queue[] , int element , int size){

	if(is_full(size)) return -1;

	if(front == -1){
		front = 0;
		rear = 0;	
	}else if( rear == size - 1 ) {
		rear = 0;	
	}else {
		rear = rear + 1;
	}

	queue[rear] = element;

	return 1;
}

int delete_front(int queue[],int size){
	int element;
	if(is_empty()) return -1;
	element = queue[front];

	if(front == rear){
		front = -1;
		rear = -1;		
	}else if(front == size - 1) {
		front = 0;
	}else {
		front = front + 1;
	}

	return element; 
}

int delete_rear(int queue[],int size){
	int element;
	if(is_empty()) return -1;
	element = queue[rear];

	if(front == rear){
		front = -1;
		rear = -1;	
	}else if( rear == 0 ) {
		rear = size - 1;
	}else {
		rear = rear - 1;
	}

	return element;
}

void display(int queue[]){
	printf("front == %d\n",front);
	printf("rear == %d\n",rear);
	if(front <= rear){
		for(int i = front;i<=rear;i++) printf("%d ",queue[i]);
	}else {
		for(int i = rear;i<=front;i++) printf("%d " ,queue[i]);
	}

	printf("\n");
}


void main(){

	int size,choice;

	printf("Enter the size of the double ended circular queue:\n");
	scanf("%d",&size);

	int queue[size];

	while(1){

		printf("\n1.Insert at the front\n");
		printf("\n2.Insert at the rear\n");
		printf("\n3.Delete at the front\n");
		printf("\n4.Delete at the rear\n");
		printf("\n5.Display Queue\n");

		printf("\nEnter your choice:\n");
		scanf("%d",&choice);

		switch(choice){
			case 1:{
				int item;
				printf("\nEnter the value of the element:\n");
				scanf("%d",&item);
				if(insert_front(queue,item,size) == -1) printf("\nQueue is Full\n");
				else printf("\n%d is inserted successfully\n",item);
				break;
			}
			case 2:{
				int item;
				printf("\nEnter the value of the element:\n");
				scanf("%d",&item);
				if(insert_rear(queue,item,size) == -1) printf("\nQueue is Full\n");
				else printf("\n%d is inserted successfully\n",item);
				break;
			}
			case 3:{
				int item = delete_front(queue,size);
				if( item == -1 ) printf("\nQueue is Empty\n");
				else printf("\n%d is deleted from queue\n",item);
				break;		
			}
			case 4:{
				int item = delete_rear(queue,size);
				if(item == -1) printf("\nQueue is Empty\n");
				else printf("\n%d is deleted from queue\n",item);
				break;		
			}
			case 5:{
				display(queue);
				break;		
			}
		}


		printf("Do you want to continue?");
		char ch;
		scanf(" %c",&ch);
		if(ch == 'n') break;
	}

}
