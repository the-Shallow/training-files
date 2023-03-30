#include<stdio.h>

// Count frequency of each element

void main(){
	int a[5];

	for(int i = 0;i<5;i++){
		printf("Enter the value of new Element at %d:\n",i);
		scanf("%d",&a[i]);
	}

	for(int i = 0;i<5;i++){
		int count = 0;
		for(int j = 0;j<5;j++){
			if( a[i] == a[j] ) count++;
		}

		printf("The total number of occurrence of %d is %d\n",a[i],count);
	}
}
