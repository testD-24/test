//WAP to check whether a number is neon or not
//9=8+1,9^2=81,,8!=6+4,8^2=64...number=sum of the digits of its square
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number to check whether it is neon or not :\n");
    scanf("%d",&n);
    int a,n1=n*n,s=0,N=n;
    while(n1>0)
    {
        a=n1%10;
        s=s+a;
        n1=n1/10;
    }   
    if(N==s)
    {
        printf("The given number %d is a neon number",N);
    }
    else
    {
        printf("The given number %d is not a neon number",N);
    }
}