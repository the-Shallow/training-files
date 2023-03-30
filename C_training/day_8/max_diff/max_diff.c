#include<stdio.h>

void get_max_diff(int arr[] , int size , int res[]){

	for(int i = size-1;i>0;i--){
		int max_diff = arr[i] - arr[i-1] ;
		for(int j = i-1;j>=0;j--){
			if(  arr[i] - arr[j] > max_diff  ) max_diff = arr[i] - arr[j];
		}

		res[i] = max_diff;
	}

	res[0] = arr[0];
}

void main(){
	int arr[5] = { 15,10,5,25,10 };
	int res[5] = {0,0,0,0,0};

	get_max_diff( arr,5,res );

	for(int i = 0;i<5;i++){
		printf("%d\t", res[i] );
	}

	printf("\n");
}
