#include<stdio.h>

// Reverse an array

void reverse(int a[5]){
	int low = 0,high = 4;

	while(low < high){
		int temp = a[low];
		a[low] = a[high];
		a[high] = temp;
		low++;
		high--;
	}
}

void print(int a[5]){
	for(int i = 0;i<5;i++) printf( "\n a[%d] = %d \n" , i , a[i] );
}

void main(){
	int a[5];


	for(int i = 0;i<5;i++){
		printf("Enter the value of new Element at %d\n",i);
		scanf("%d",&a[i]);
	}

	printf("\nPrinting old array:\n");
	print(a);
	reverse(a);

	printf("\nPrinting new array:\n");
	print(a);
}
