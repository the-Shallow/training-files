#include<stdio.h>


typedef struct point {
	int x,y;
} Point;


Point get_sum(Point p1,Point p2){

	Point temp;

	temp.x = p1.x + p2.x;
	temp.y = p1.y + p2.y;

	return temp;
}


void main(){


	Point p1,p2;

	p1.x = 10;
	p1.y = 20;
	
	p2.x = 30;
	p2.y = 40;


	Point p3 = get_sum(p1,p2);

	printf("\nThe point is %d and %d\n",p3.x,p3.y);
}
