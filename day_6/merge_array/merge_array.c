#include<stdio.h>

// Merge Two Array

void merge( int arr1[] , int arr2[] , int size1 , int size2 , int arr3[] ){
	int size = size1 + size2;

	for( int i = 0;i<size1;i++ ){
		arr3[i] = arr1[i];
	}

	for( int i = size1 ;i<size2;i++ ){
		arr3[i] = arr2[i];
	}
}

void main(){
	int size1,size2;
	
	printf("Enter the value of size1:\n");
	scanf("%d",&size1);

	printf("Enter the value of size2:\n");
	scanf("%d",&size2);


	int arr1[size1],arr2[size2];

	for( int i = 0;i<size1;i++ ){
		printf("Enter the value of new ELement in arr1 at %d:\n",i);
		scanf("%d",&arr1[i]);
	}

	for( int i = 0;i<size2;i++ ){
		printf("Enter the value of new Element in arr2 at %d:\n",i);
		scanf("%d",&arr2[i]);
	}


	int size = size1+size2;
	int arr[size];

	merge(arr1,arr2,size1,size2,arr);

	printf("\nMerged Array is \n");
	for( int i = 0;i<size;i++ ){
		printf("%d\t",arr[i]);
	}
}
