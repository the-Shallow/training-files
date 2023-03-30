#include<stdio.h>

// Scan and Print the Array

void main(){
	int a[10];

	for(int i = 0;i<10;i++){
		printf("Enter the value of new element at %d \n",i);
		scanf("%d",&a[i]);	
	}

	for(int i = 0;i<10;i++){
		printf("a[%d] = %d\n",i,a[i]);	
	}
}
