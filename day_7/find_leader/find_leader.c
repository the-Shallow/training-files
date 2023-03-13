#include<stdio.h>

// Find all the leader element

void main(){
	int size,max = -1;

	printf("Enter the size of the array:\n");
	scanf("%d",&size);

	int arr[size];

	for(int i = 0;i<size;i++){
		printf("Enter the element at %d:\n",i);
		scanf("%d",&arr[i]);
	}

	for(int i = size-1;i>=0;i--){
		if(arr[i] >= max){
			max = arr[i];
			printf("The leader is %d\n",arr[i]);
		}		
	}
}
