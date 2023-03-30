#include<stdio.h>

// Pointer Operations



void scan( int *p ,int size ){
	
	for(int i = 0;i<size;i++){
		printf("Enter the value of new Element at %d:\n",i);
		scanf("%d",p);
		p++;
	}
}

void scan_two( int* p , int row , int col ){

	for(int i = 0;i<row;i++){
		for(int j = 0;j<col;j++){
			scanf( "%d" , (p + i*col) + j );
		}
	}
}

void print_two( int* p , int row , int col ){

	for(int i = 0;i<row;i++){
		for(int j = 0;j<col;j++){
			printf("%p\t",((p + i*col) + j));
			printf( "%d\t" , *((p + i*col) + j) );
		}
		printf("\n");
	}
}

void print( int* p , int size ){
	for(int i = 0;i<size;i++){
		printf("Value at p is %d\n",*p);
		printf("Address at p is %p\n",p);
		p++;
	}
}


/*void main(){	


	int size;

	printf("Enter the size of the array:");
	scanf("%d",&size);

	
	
	int arr[size][;
	

	scan( arr,size );
	print( arr,size );
}*/


void main(){

	int row = 2,col = 3;
	int arr[row][col];

	scan_two(arr[0],row,col);
	//print_two(arr[0],row,col);


	for(int i = 0;i<row;i++){
		for(int j = 0;j<col;j++){
			printf("%d\t", *( *(arr + i) + j ) );
		}

		printf("\n");
	}
}
