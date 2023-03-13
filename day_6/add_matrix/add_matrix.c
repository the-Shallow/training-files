#include<stdio.h>
#define size1 2
#define size2 2

// Add Matrix

void add(int arr1[size1][size2],int arr2[size1][size2]){
	for( int i = 0;i<size1;i++ ){
		for(int j = 0;j<size2;j++) arr1[i][j] += arr2[i][j];
	}
}

void main(){

	int arr1[size1][size2],arr2[size1][size2];

	for( int i = 0;i<size1;i++ ){
		for( int j = 0;j<size2;j++){
			printf("Enter the value of new Element in arr1 at %d and %d:\n ",i,j);

			scanf("%d",&arr1[i][j]);

			printf("Enter the value of new Elment in arr2 %d and %d :\n",i,j);

			scanf("%d",&arr2[i][j]);
		}
	}

	add(arr1,arr2);

	printf("\nAfter Adding two Matrix:\n");

	for( int i = 0;i<size1;i++ ){
		for(int j = 0;j<size2;j++){
			printf("%d\t",arr1[i][j]);
		}

		printf("\n");
	}
}
