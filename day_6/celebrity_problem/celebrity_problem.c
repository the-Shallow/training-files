#include<stdio.h>

// Find the Celebrity 


void main(){
	int size;

	printf("Enter the size of the matrix:\n");
	scanf("%d",&size);
	int arr[size][size],check[size],knows[size];

	for(int i = 0;i<size;i++) check[i] = 0;

	for(int i = 0;i<size;i++){
		for(int j = 0;j<size;j++){
			scanf("%d",&arr[i][j]);
		}	
	}

	for(int i = 0;i<size;i++){
		for(int j = 0;j<size;j++){
			if(arr[i][j] == 1){
				knows[i]++;
				check[j]++;
			}
		}
	}

	for(int i = 0;i<size;i++){
		if(knows[i] == 0 && check[i] == size-1){
			printf("The celebrity is %d\n",i);
			return;
		}
	}

	printf("There is no celebrity\n");	
}

