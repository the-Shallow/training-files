#include<stdio.h>

int is_even(int num){
	return num % 2;
}


int is_prime( int num ){
	
	for(int i = 2;i<num/2;i++){
		if( num % i == 0 ) return 0;
	}

	return 1;
}

void main(){

	for( int  i = 0;i<=100;i++){
		!is_even( i ) ? printf("\nThe number %d is even\n",i) : printf("\nThe number %d is odd\n",i);
	}

	for( int  i = 2;i<=100;i++){
		is_prime( i ) ? printf("\nThe number %d is prime\n",i) : printf("\nThe number %d is not prime\n",i);
	}
}
