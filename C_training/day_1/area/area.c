#include<stdio.h>

// Calculate area and circumference



void main(){
	float length,breadth,radius;

	printf("Enter the length of the rectangle:");
	scanf("%f",&length);

	printf("\nEnter the breadth of rectangle:");
	scanf("%f",&breadth);

	printf("\nEnter the radius of the circle:");
	scanf("%f",&radius);

	float area_rectangle = length * breadth;
	float perimeter_rectangle = 2 *(length + breadth);
	float area_circle = 3.14 * radius * radius;
	float circumference_circle = 2 * 3.14 * radius;

	printf("\n----------------------------------\n");
	printf("The area of rectangle is %f\n",area_rectangle);
	printf("The perimeter of rectangle is %f\n",perimeter_rectangle);
	printf("The area of circle is %f\n",area_circle);
	printf("The circumference of circle is %f\n",circumference_circle);
	printf("\n-----------------------------------\n");	
}
