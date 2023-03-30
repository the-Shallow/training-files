#include<stdio.h>
#include<stdlib.h>

// Dynamic Memory Allocation

void main(){

	int* fp = malloc( 3 * sizeof(int) );

	fp[0] = 1;
	fp[1] = 2;
	fp[2] = 3;

	for( int i = 0;i<3;i++){
		printf("%d\n",fp[i]);
	}

	int* temp = malloc( 4 * sizeof(int));

	for(int i = 0;i<3;i++) temp[i] = fp[i];
	temp[3] = 4;

	free(fp);

	fp = temp;

	for(int i = 0;i<4;i++){
		printf("Using fp:%d\n",fp[i]);
		printf("Using temp:%d\n",temp[i]);
	}

}

