#include<stdio.h>

// Check if two arrays are equal


void main(){
	int a1[5],a2[5];

	for(int i = 0;i<5;i++){
		printf("Enter the value of new Element for array 1 at %d\n",i);
		scanf("%d",&a1[i]);

		printf("Enter the value of new Element for array 2 at %d\n",i);
		scanf("%d",&a2[i]);
	}

	for(int i = 0;i<5;i++){
		if( a1[i] != a2[i] ) {
			printf("\nArrays are not equal\n");
			return;
		}
	}

	printf("\nArrays are equal\n");

}

