//WAP to check whether a number is spy or not
//123,1+2+3=1*2*3,,,111,1+1+1!=1*1*1....sum of the digits=product of the digits
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number to check whether it is a spy number or not :\n");
    scanf("%d",&n);
    int a,n1=0,n2=1,N=n;
    while(n>0)
    {
        a=n%10;
        n1=n1+a;
        n2=n2*a;
        n=n/10;
    }   
    if(n2==n1)
    {
        printf("The given number %d is a spy number",N);
    }
    else
    {
        printf("The given number %d is not a spy number",N);
    }
}