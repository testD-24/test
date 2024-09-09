//WAP to swap two numbers with using a third variable
#include<stdio.h>
int main ()
{
	int a,b,sw;
	printf("Enter two numbers to swap :\n");
	scanf("%d",&a);
	scanf("%d",&b);
	sw=a;
	a=b;
	b=sw;
	printf("swap of the numbers are: %d & %d respectively",a,b);
	return 0;
}