// WAP to check whether a number is ugly or not
// a number by continuously dividing with 2,3,5 leaves quotient as 1 and remainder as 0
// Ex:300=2*5*3*2*5,so its prime factors can be 2,3,5 only and gets completely divided by 2,3,5 making quotient as 1 
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number to check whether it is ugly or not :\n");
    scanf("%d",&n);
    printf("The given number %d is ",n);
    while(n%2==0)
    {
        n/=2;
    }
    while(n%3==0)
    {
        n/=3;
    }
    while(n%5==0)
    {
        n/=5;
    }
    if (n==1)
    {
        printf("an ugly number");
    }
    else
    {
        printf("not an ugly number");
    }
    return 0;
}