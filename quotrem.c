//WAP to input 2 numbers from user and print the quotient and remainder of the numbers 
#include<stdio.h>
int main()
{
	int a,b,r;
    float q;
	printf("Enter the two numbers to find its quotient & remainder :\n");
	scanf("%d",&a);
	scanf("%d",&b);
	q=a/b;
	r=a%b;
	printf("The quotient and remainder of the two numbers %d & %d is :%f & %d respectively",a,b,q,r);
	return 0;
 } 