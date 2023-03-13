#include<stdio.h>
#include<stdlib.h>

// Maximum Difference between successive elements of an sorted array


void merge(int arr[] ,int left, int mid , int right){
	
	int size1 = mid - left + 1;
	int size2 = right - mid;
	int leftArr[size1];
	int rightArr[size2];

	for(int i = 0;i<size1;i++){
		leftArr[i] = arr[left+i];
	}

	for(int i = 0;i<size2;i++){
		rightArr[i] = arr[mid+i+1];
	}

	int k = left;
	 left = 0,right = 0;

	while(left<size1 && right < size2){
		if( leftArr[left] <= rightArr[right] ){
			arr[k++] = leftArr[left++];
		}else {
			arr[k++] = rightArr[right++];
		}
	} 

	while(left < size1){
		arr[k++] = leftArr[left++];
	}

	while(right < size2){
		arr[k++] = rightArr[right++];
	}

	return;
}

void mergeSort(int arr[] , int left, int right){

	if( left >= right ) return;

	int mid = left + ( right - left) / 2;

	mergeSort(arr,left,mid);
	mergeSort(arr,mid+1,right);
	merge(arr,left,mid,right);
}

int max_diff(int arr[] , int size){

	int max_diff = arr[1] - arr[0];


	for(int i = 1;i<size;i++){
		int temp = arr[i] - arr[i-1];

		if(temp > max_diff) max_diff = temp;
	}


	return max_diff;

}


void main(){

	int size;
	
	printf("\nEnter the size of the array:\n");
	scanf("%d",&size);

	int arr[size];

	for(int i = 0;i<size;i++){
		printf("\nEnter the element at index %d\n",i);
		scanf("%d",&arr[i]);
	}

	if(size < 2){
		printf("\nThe maximum Difference is 0");
		return;
	}
	
	mergeSort(arr,0,size-1);
	
	printf("\nThe maximum Difference is %d\n",max_diff(arr,size));	
}
