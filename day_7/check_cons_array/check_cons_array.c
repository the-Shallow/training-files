#include<stdio.h>

// Check if the array is Consecutive


void main(){
	int size;

	printf("Enter the size of the array:");
	scanf("%d",&size);

	int arr[size];	

	int sum = ( size * ( size + 1) ) / 2;

	for(int i = 0;i<size;i++){
		printf("Enter the value of new Element at %d:\n",i);
		scanf("%d",&arr[i]);
	}

	for( int i = 0;i<size;i++) sum -= arr[i];

	if( sum == 0 ) printf("\nArray is Consectuive\n");
	else printf("\nArray is not Consectuive\n");

	
}
