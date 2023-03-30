#include<stdio.h>

// Count positive , negative , zero,odd and even numbers


void main(){
	int num,pos_count = 0,neg_count = 0,zero_count = 0,odd_count = 0,even_count = 0;

	printf("Enter the value of num:");
	scanf("%d",&num);

	for(int i = 0;i<num;i++){
		int temp;
		 scanf("%d",&temp);
		if(temp == 0) zero_count++;
		if(temp >= 0) pos_count++;
		else neg_count++;

		if(temp %2 == 0) even_count++;
		else odd_count++; 		
	}

	printf("Zero Count:%d\n",zero_count);
	printf("Positive Count:%d\n",pos_count);
	printf("Negative Count:%d\n",neg_count);
	printf("Odd Count:%d\n",odd_count);
	printf("Even Count:%d\n",even_count);
}
