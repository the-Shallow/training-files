#include<stdio.h>


void main(){

	for(int i = 1;i<=5;i++){
		for(int j = 1;j<=5;j++){
			if(i == 1 || j == 3) printf("*\t");
			else printf("\t");
		}

		printf("\n");
	}

}
