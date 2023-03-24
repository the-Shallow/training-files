#include<stdio.h>

int main(int argc , char* argv[]){

	int i;
	for(int i = 1;i<argc;i++){
		printf("%s ",argv[i]);
	}

	printf("\n");
}
