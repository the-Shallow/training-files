#include<stdio.h>

// Cyclic rotate arry by one

void rotate(int a[5] ){
	int temp = a[4];

	for(int i = 4;i>0;i--){
		a[i] = a[i-1];
	}

	a[0] = temp;
}

void print(int a[5]){
	for(int i = 0;i<5;i++){
		printf("a[%d] = %d\n",i,a[i]);
	}
}

void main(){
	int a[5];

	for(int i = 0;i<5;i++){
		printf("Enter the value of new Element at %d:\n",i);
		scanf("%d",&a[i]);
	}

	printf("\nPrinting values of old array:\n");
	print(a);
	rotate(a);
	printf("\nPrinting values of new array:\n");
	print(a);
}
