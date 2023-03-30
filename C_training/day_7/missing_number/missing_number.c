#include<stdio.h>

// Find the missing number 

void main(){
	int size;

	printf("Enter the size of the array:");
	scanf("%d",&size);
	size++;
	int sum = (size*(size + 1) ) / 2;
	
	int arr[size-1];

	for(int i = 0;i<size-1;i++){
		printf("Enter the value of new Element at %d:\n",i);
		scanf("%d",&arr[i]);
	}

	for(int i = 0;i<size-1;i++){
		sum  = sum - arr[i];
	}

	printf("The missing value is %d\n",sum);
}
