//WAP to find out the factorial of a given number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number to find out its factorial :\n");
    scanf("%d",&n);
    int f=1;
    printf("The factorial of the given number %d is :",n);
    while(n>0)
    {
        f=f*n;
        n=n-1;
    }
    printf(" %d",f);
    return 0;
}