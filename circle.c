//WAP to find area and perimeter of a circle
#include<stdio.h>
int main()
{
	float r,ar,pe;
	printf("Enter the radius of the circle to find out area and perimeter :\n");
	scanf("%f", &r);
	pe=2*3.14*r;
	ar=3.14*r*r;
	printf("The area & perimeter of the circle with given sides %.2f are : %.2f and %.2f repectively",r,ar,pe);
	return 0;
}