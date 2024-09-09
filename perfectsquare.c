//WAP to check whether a number is perfect square or not
// 25=5*5,,81=9*9...number is a square of any single unique number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number to check whether it is a perfect square or not :\n");
    scanf("%d",&n);
    int a=1,N=n;
    while(n/2>a)
    {
        if (n/a==a && n%a==0)
        {
            printf("The given number %d is a perfect square of the number %d",N,a);
            break;
        }
        else
        {
            a=a+1;
        }
    }   
    if(N/2==a)
    {
        printf("The given number %d is not a perfect square of any number",N);
    }
}