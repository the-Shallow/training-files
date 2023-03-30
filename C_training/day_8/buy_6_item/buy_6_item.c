#include<stdio.h>


// Calculate the sum of max 3 items from 6 items


void main(){
	int a,b,c,d,e,f,max_1  = -1 , max_2 = -1,max_3 = -1;

	printf("Enter the value of a:\n");
	scanf("%d",&a);
	max_1 = a;

	printf("Enter the value of b:\n");
	scanf("%d",&b);

	if( b > max_1  ) {
		max_2 = max_1;
		max_1 = b;
	}else {
		max_2 = b;
	}

	printf("Enter the value of c:\n");
	scanf("%d",&c);

	if( c > max_1 ){
		max_3 = max_2;
		max_2 = max_1;		
		max_1 = c;
	}else {
		if(c > max_2){
			max_3 = max_2;
			max_2 = c;		
		}else {
			max_3 = c;
		}	
	}

	printf("Enter the value of d:\n");
	scanf("%d",&d);

	if( d > max_1 ){
		max_3 = max_2;
		max_2 = max_1;		
		max_1 = d;
	}else {
		if(d > max_2){
			max_3 = max_2;
			max_2 = d;		
		}else if( d > max_3 ) {
			max_3 = d;
		}
	}

	printf("Enter the value of e:\n");
	scanf("%d",&e);


	if( e > max_1 ){
		max_3 = max_2;
		max_2 = max_1;		
		max_1 = e;
	}else {
		if(e > max_2){
			max_3 = max_2;
			max_2 = e;		
		}else if( e > max_3 ) {
			max_3 = e;
		}
	}


	printf("Enter the value of f:\n");
	scanf("%d",&f);
	

	if( f > max_1 ){
		max_3 = max_2;
		max_2 = max_1;		
		max_1 = f;
	}else {
		if(f > max_2){
			max_3 = max_2;
			max_2 = f;		
		}else if( f > max_3 ) {
			max_3 = f;
		}
	}


	printf("The sum of 3 numbers is %d\n",max_1 + max_2 + max_3);
}
