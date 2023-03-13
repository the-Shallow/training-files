#include<stdio.h>

// Next Greater Element 


int get_next_great(int arr[] , int curr ,int size){
	
	for(int i = curr+1;i<size;i++){
		if( arr[i] > arr[curr] ) return arr[i];
	}

	return -1;
}


void main(){
	int size;

	printf("Enter the size of the array:");
	scanf("%d",&size);

	int arr[size];

	for(int i = 0;i<size;i++){
		printf("Enter the value of new Element at %d:\n",i);
		scanf("%d",&arr[i]);
	}

	for( int i = 0;i<size;i++ ){
		printf("%d\n",get_next_great(arr,i,size));
	}	
}
