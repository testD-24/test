//WAP to input 2 numbers from user and print the difference of the numbers 
#include<stdio.h>
int main()
{
	int a,b,s;
	printf("Enter the two numbers to find its difference :\n");
	scanf("%d",&a);
	scanf("%d",&b);
	s=a-b;
	printf("The difference of the two numbers %d & %d is :%d",a,b,s);
	return 0;
 } 