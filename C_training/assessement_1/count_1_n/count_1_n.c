#include<stdio.h>
#include<stdlib.h>


// Convert Number of ones in number less than or equal to n


int count1s(int n){
	int count = 0;
	while(n > 0 ){
		int lastDigit = n % 10;
		if(lastDigit == 1) count++;
		n /= 10;
	}

	return count;
}


void main(){

	int n,count = 0;


	printf("\nEnter the value of number:\n");
	scanf("%d",&n);

	for(int i = 1;i<=n;i++){
		count += count1s(i);
	}

	printf("\nThe total Number of 1 in number less or equal to %d is %d\n",n,count);
}
