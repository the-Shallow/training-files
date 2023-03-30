#include<stdio.h>

// Calculate the positive,negative,zero,odd and even numbers in an array

void main(){
	int a[5],pos_count = 0,neg_count = 0,zero_count = 0,odd_count = 0,even_count = 0;

	for(int i = 0;i<5;i++){
		printf("Enter the value of new Element at %d\n",i);	
		scanf("%d",&a[i]);
	}


	for(int i = 0;i<5;i++){
		if( a[i] == 0 ) zero_count++;

		if( a[i] >= 0 ) pos_count++;
		else neg_count++;

		if(  a[i] % 2 == 0 ) even_count++;
		else odd_count++;
	}

	printf("Zero Count is %d\n",zero_count);
	printf("Positive Count is %d\n",pos_count);
	printf("Negative Count is %d\n",neg_count);
	printf("Odd Count is %d\n",odd_count);
	printf("Even Count is %d\n",even_count);
}
