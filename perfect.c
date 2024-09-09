//WAP to check whether a number is perfect or not
//28=1+2+4+7+14,,36!=1+2+3+4+6+9+12+18....number=sum of its factors excluding the number itself
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number to check whether it is a perfect number or not :\n");
    scanf("%d",&n);
    int a=1,s=0,N=n;
    while(n>a)
    {
        if (n%a==0)
        {
            s=s+a;
            a=a+1;
        }
        else
        {
            a=a+1;
        }
    }   
    if(N==s)
    {
        printf("The given number %d is a perfect number",N);
    }
    else
    {
        printf("The given number %d is not a perfect number",N);
    }
}