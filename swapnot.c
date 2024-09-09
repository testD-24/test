//WAP to swap two numbers without using a third variable
#include<stdio.h>
int main ()
{
	int a,b;
	printf("Enter two numbers to swap :\n");
	scanf("%d",&a);
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("swap of the numbers are: %d & %d respectively",a,b);
	return 0;
}