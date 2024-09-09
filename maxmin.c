//WAP to input 2 numbers from user and print the max and min of the numbers 
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the two numbers :\n");
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>b)
	{
		printf("Out of these two numbers %d is maximum & %d is minimum",a,b);
	}
	else
	{
		printf("Out of these two numbers %d is maximum & %d is minimum",b,a);
	}	
	return 0;
 } 