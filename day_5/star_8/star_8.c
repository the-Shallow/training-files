#include<stdio.h>


void main(){

	for(int i = 0;i<5;i++){
		for(int j = 5;j>i;j--){
			printf("%d",5-j+1);
		}
		printf("\n");
	}

}
