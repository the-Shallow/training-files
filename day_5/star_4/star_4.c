#include<stdio.h>

void main(){

	for(int i = 0;i<5;i++){
		for(int k = 0;k<5-i;k++) printf("\t");
		for(int j = 0;j<i;j++) printf("*\t");

		printf("\n");
	}
}
