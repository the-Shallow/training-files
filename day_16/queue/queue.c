#include<stdio.h>

int rear = -1,front = -1;

int is_full(int size){
	return rear == size;
}

int is_empty(){

	return front == rear;
}

int enqueue(int queue[] , int element , int size){
	if( is_full(size) ) return 0;


	if( rear == -1 ) rear = 0;

	queue[rear++] = element;
	return 1;
}

int dequeue(int queue[]){

	if( is_empty() ) return -1;

	int element = queue[++front];
	
	if( rear - front == 1 ){
		front = -1;
		rear = -1;
	}

	return element;
}

void display(int queue[]){

	for(int i = front+1 ; i< rear;i++){
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
				int item = dequeue(queue);
				if(item == -1)	printf("\nQueue is Empty\n");
				else printf("\n%d is removed from queue\n",item);
				break;		
			}

			case 3:{
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
