#include<stdio.h>
#include<stdlib.h>
#include "add.c"
#include "sub.c"

int add(int a ,int b);
int sub(int a,int b);

int main(){
	int a = 30,b = 6;
	printf("\nAddition of a and b is %d\n",add(a,b));
	printf("\nSubtraction of a and b is %d\n",sub(a,b));
	return 1;
}
