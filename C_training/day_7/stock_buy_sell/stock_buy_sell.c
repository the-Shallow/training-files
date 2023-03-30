#include<stdio.h>

// Calculate maximum profit 

void main(){
	int size;

	printf("Enter the size of the array:");
	scanf("%d",&size);

	int arr[size];

	for(int i = 0;i<size;i++){
		printf("Enter the value of new Element at %d:\n",i);
		scanf("%d",&arr[i]);
	}


	int max_profit = 0,max = arr[size-1];
	
	for(int i = size-2;i>=0;i--){
		if( arr[i] < max ){
			int temp = max - arr[i];
			if( temp > max_profit) max_profit = temp;
		}

		if( arr[i] > max ){
			max = arr[i];		
		}
	}

	printf("The maximum profit is %d\n",max_profit);
}
