#include<stdio.h>

int rear = -1,front = -1;

int is_full(int size){
	return front == (rear+1)%size;
}

int is_empty(){

	return front == -1;
}

int enqueue(int queue[] , int element , int size){
	if( is_full(size) ) return 0;


	if( rear == -1 ) {
		front = 0;
	}
	
	rear = (rear + 1) %  size;
	//printf("rear = %d\n",rear);
	queue[rear] = element;
	return 1;
}

int dequeue(int queue[],int size){

	if( is_empty() ) return -1;

	int element = queue[front];
	queue[front] = -1;

	//printf("front == %d\n",front);
	
	if( rear == front ){
		front = -1;
		rear = -1;
	}else {
		front = (front+1)%size;
	}

	return element;
}

void display(int queue[],int size){

	for(int i = 0 ; i<size;i++){
		printf("%d " ,queue[i]);
	}

	printf("\n");
}

void main(){

	int size,choice;

	printf("Enter the size of the queue:");
	scanf("%d",&size);

	int queue[size];
	while(1){
		
		printf("\n1.Enter an element into queue\n");
		printf("\n2.Remove an element from the queue\n");
		printf("\n3.Display queue\n");
		
		printf("\nEnter you choice:\n");
		scanf("%d",&choice);

		switch(choice){
			case 1:{
				int item;
				printf("\nEnter the value of the element:\n");
				scanf("%d",&item);
				if(enqueue(queue,item,size) == 1) printf("\n%d is inserted successfully\n",item);
				else printf("\nQueue is Full\n");
				break; 
			}

			case 2:{
				int item = dequeue(queue,size);
				if(item == -1)	printf("\nQueue is Empty\n");
				else printf("\n%d is removed from queue\n",item);
				break;		
			}

			case 3:{
				display(queue,size);
				break;		
			}
		}

		printf("Do you want to continue?");
		char ch;
		scanf(" %c",&ch);
		if(ch == 'n') break;
	}

}
