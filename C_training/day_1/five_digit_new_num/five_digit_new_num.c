#include<stdio.h>

void main(){
	int number;
	printf("Enter the number:");
	scanf("%d",&number);

	int last = ((number % 10) + 1 ) % 10;
	number /= 10;
	int second_last = ((number % 10) + 1 ) % 10;
	number /= 10;
	int third_last = ((number % 10) + 1 ) % 10;
	number /= 10;
	int fourth_last = ((number % 10) + 1 ) % 10;
	number /= 10;
	int fifth_last = ((number % 10) + 1 ) % 10;
	number /= 10;

	printf("\n%d%d%d%d%d\n",fifth_last,fourth_last,third_last,second_last,last);
}
