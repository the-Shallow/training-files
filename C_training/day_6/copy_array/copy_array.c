#include<stdio.h>

// Copy array


void copy(int a1[5] , int a2[5]){
	for(int i = 0;i<5;i++) a2[i] = a1[i];
}

void main(){
	int a1[5],a2[5];

	for(int i = 0;i<5;i++){
		printf("Enter the value of new element at %d:\n",i);
		scanf("%d",&a1[i]);
	}

	copy(a1,a2);

	for(int i = 0;i<5;i++){
		printf("a2[%d] = %d\n",i,a2[i]);
	}
}
