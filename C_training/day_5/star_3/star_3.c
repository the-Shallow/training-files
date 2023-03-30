#include<stdio.h>

void main(){

	for(int i = 0;i<5;i++){
		for(int j = 0;j<5;j++){
			if(j == 0 || j == 4 || i - j == 0) printf("*\t");
			else printf("\t");
		}

		printf("\n");
	}
}
