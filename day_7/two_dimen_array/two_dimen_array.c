#include<stdio.h>

// Scan and Print 2D Matrix


void main(){
	int size;

	printf("Enter the size of the matrix:");
	scanf("%d",&size);

	int a[size][size];

	for(int i = 0;i<size;i++){
		for(int j = 0;j<size;j++){
			scanf("%d",&a[i][j]);
		}
	}

	for(int i = 0;i<size;i++){
		for(int j = 0;j<size;j++){
			printf("a[%d][%d] = %d\n",i,j,a[i][j]);
		}
	}


}
