//WAP to find area and perimeter of a rectangle
#include<stdio.h>
int main()
{
	float a,b,ar,pe;
	printf("Enter the sides of the rectangle to find out area and perimeter :\n");
	scanf("%f",&a);
	scanf("%f",&b);
	pe=2*(a+b);
	ar=a*b;
	printf("The area & perimeter of the rectangle with given sides %.2f & %.2f are : %.2f and %.2f repectively",a,b,ar,pe);
	return 0;
}