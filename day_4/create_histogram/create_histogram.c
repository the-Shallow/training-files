#include<stdio.h>

// Take 5 integers and create histogram


void main(){

	int arr[5];

	for(int i = 0;i<5;i++){
		printf("Enter the value :\n");
		scanf("%d",&arr[i]);
	}

	for(int i = 0;i<5;i++){
		for(int j = 0;j<arr[i];j++){
			printf("*");	
		}

		printf("\n");
	}

}
