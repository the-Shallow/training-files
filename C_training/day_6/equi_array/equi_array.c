#include<stdio.h>

// Equilibrium of the array

void main(){
	int a[6],sum_array[6];
	 
	for(int i = 0;i<6;i++){
		printf("Enter the value of new Element at %d:\n",i);
		scanf("%d",&a[i]);
		if(i > 0) sum_array[i] = sum_array[i-1] + a[i];
		else sum_array[0] = a[i];
	}

	if( a[0] == sum_array[5]  ){
		printf("The Equilibrium is at %d having value %d\n",0,a[0]);
		return;
	}

	if( a[5] == sum_array[5] ){
			printf("The Equilibrium is at %d having value %d\n",5,a[5]);
		return;
	} 

	for(int i = 1;i<5;i++){
		if( sum_array[i-1] == ( sum_array[5] - sum_array[i] ) ){
			printf("The Equilibrium is at %d having value %d\n",i,a[i]);
		return;
		}
	}

	printf("The given array have no Equilibrium\n");

}
