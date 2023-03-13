#include<stdio.h>

// Calculate min,max,average,sum of array


void main(){
	int a[5];

	int min = 100000,max = 0,sum = 0;
	float average = 0.0;
	
	for(int i = 0;i<5;i++){
		printf("Enter the value of new Element at %d:\n",i);
		scanf("%d",&a[i]);	

		if( a[i] < min ) min = a[i];
		if(a[i] > max ) max = a[i];
		sum += a[i];
	}

	printf("The Minimum number in array is %d\n",min);
	printf("The Maximum number in array is %d\n",max);
	printf("The Sum of array is %d\n",sum);
	printf("The average of array is %f\n",sum/5.0);

}
