//WAP to check whether a number is prime or not
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number to check whether it is prime or not :\n");
    scanf("%d",&n);
    int a=1,c=0;
    while(n>=a)
    {
        if(n%a==0)
        {
            c=c+1;
            a=a+1;
        }
        else
        {
            a=a+1;
        }
    }
    if(c==2)
    {
        printf("The given number %d is a prime number",n);
    }
    else
    {
        printf("The given number %d is not a prime number",n);
    }
}