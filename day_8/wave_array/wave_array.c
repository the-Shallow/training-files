#include<stdio.h>

// Wave Array

void wave_array(int arr[],int size){
	for( int i = 0;i<size;i+=2 ){
		if( i+1 < size ){
			int temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;		
		}
	}
}

void main(){
	int size;

	printf("Enter the size of the array:");
	scanf("%d",&size);

	int arr[size];

	for( int  i = 0;i<size;i++){
		printf("Enter the value of new Element at %d:\n",i);
		scanf("%d",&arr[i]);	
	}

	wave_array(arr,size);
	printf("\n");
	for( int  i = 0;i<size;i++){
		printf("%d\t",arr[i]);	
	}
}
