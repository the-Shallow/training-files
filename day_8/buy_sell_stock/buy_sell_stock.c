#include<stdio.h>


// Calculate maximum profit 


void main(){

	int size;

	printf("Enter the size of the array:");
	scanf("%d",&size);


	int arr[size];

	for(int i = 0;i<size;i++){
		printf("Enter the value of new Elment at %d:\n",i);
		scanf("%d",&arr[i]);
	}

	int segment[size+1];

	int start = 0;
	int k = 0;
	while(start < size){
		
		while( (start < size) && (arr[start+1] <= arr[start]) ) start++;
		
		int low = start++;

		while( (start < size) && (arr[start] >= arr[start-1]) ) start++;

		int end = start-1;

		segment[k++] = low;
		segment[k++] = end;
	
	}

	int total_profit = 0;
	for(int i = 1;i<k;i+=2 ){
		total_profit += arr[segment[i]] - arr[segment[i-1]];
	}

	printf("\nThe total profit is %d\n",total_profit);
	

}
