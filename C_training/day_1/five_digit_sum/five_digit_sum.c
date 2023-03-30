#include<stdio.h>

// Calculate the sum of 5-digit number

int sum(int num) {
	int sum = 0;
	while(num > 0 ){
		sum += num%10;
		num /= 10;	
	}

	return sum;
}

int my_pow(int times){
	int val = 1;	
	while(times > 0){
		val *= 10;
		times--;
	}

	return val;
}

int reverse(int num){
	int val = 4;
	int reverse_num = 0;
	while(num > 0){
		reverse_num += ( (num%10) * my_pow(val) );
		val--;
		num = num / 10; 
	}

	return reverse_num;
}

void main(){
	int number;

	printf("Enter the value of number:");
	scanf("%d",&number);

	printf("\nThe sum of given number is: %d\n",sum(number));
	printf("\nThe reverse of given number is:%d\n",reverse(number));
}
