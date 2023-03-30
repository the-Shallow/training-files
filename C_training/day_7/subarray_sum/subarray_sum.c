#include<stdio.h>

// Subarray with given sum


int is_subarray_sum(int arr[] , int length , int end ,int sum){
	for(int i = 0;i<end;i++){
		if( arr[i] == sum ) return i;
	}

	return -1;
}

void main(){
	int size,given_sum;

	printf("Enter the size of the array:");
	scanf("%d",&size);

	printf("Enter the given sum:");
	scanf("%d",&given_sum);

	int arr[size],sum[size];


	for(int i = 0;i<size;i++){
		printf("Enter the value of new element at %d:\n",i);
		scanf("%d",&arr[i]);
		if(i > 0) sum[i] = sum[i-1] + arr[i];
		else sum[0] = arr[i];
	}

	for(int i = 0;i<size;i++){
		int start = is_subarray_sum(sum,size,i,sum[i] - given_sum); 
		if( start != -1 ) {
			printf("\nStart index of subarray is %d and End index of subarray is %d\n",start+1,i);
			return;		
		}
	}

	printf("\nThere is no subarray with the given sum\n");

}
