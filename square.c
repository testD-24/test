//WAP to find area and perimeter of a square
#include<stdio.h>
int main()
{
	float s,ar,pe;
	printf("Enter the sides of the square to find out area and perimeter :\n");
	scanf("%f", &s);
	pe=4*s;
	ar=s*s;
	printf("The area & perimeter of the square with given sides %.2f are : %.2f and %.2f repectively",s,ar,pe);
	return 0;
}