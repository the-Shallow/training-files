#include<stdio.h>

// Search an element in array

int is_element(int num,int a[],int size){
	for(int i = 0;i<size;i++) {
		if(a[i] == num) return 1;	
	}

	return 0;
}

void main(){

	int a[5],search;

	for(int i = 0;i<5;i++){
		printf("Enter the value of element at %d\n",i);
		scanf("%d",&a[i]);
	}

	printf("\nEnter the value of element to  be searched:\n");
	scanf("%d",&search);

	printf( is_element(search,a,5) ? "\nThe given elemnent is present\n" : "\nThe given elemnent is not present\n" );
}
