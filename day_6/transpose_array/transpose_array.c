#include<stdio.h>

#define size1 3
#define size2 3

void transpose( int arr[size1][size2]  ){
	for( int i = 0;i<size1;i++ ){
		for( int j = i+1;j<size2;j++ ){
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}
}

void main(){
	int arr[size1][size2];

	for( int i = 0;i<size1;i++){
		for( int j = 0;j<size2;j++ ){
			printf("Enter the value of new Element at %d and %d:\n",i,j);
			scanf("%d",&arr[i][j]);
		}
	}

	transpose(arr);

	printf("\nTranspose of the array is :\n");

	for( int i = 0;i<size1;i++ ){
		for( int j = 0;j<size2;j++){
			printf("%d\t",arr[i][j]);
		}
	
		printf("\n");
	}

}
