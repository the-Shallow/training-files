#include<stdio.h>

// Calculate x raise to y

int get_x_raise_y( int x , int y){
	int res = 1;
	for( int i = 0;i<y;i++ ){
		res *= x;
	}

	return res;
}

void main(){
	
	int x , y;

	printf("Enter the value of x :");
	scanf("%d",&x);

	printf("Enter the value of y :");
	scanf("%d",&y);

	printf("\nX raise to y is  %d\n",get_x_raise_y(x,y));

}
