//WAP to check whether a number is armstrong or not
// Ex: 370=27+343+0=3*3*3+7*7*7+0*0*0,,379!=3*3*3+7*7*7+9*9*9.....number =cubes of digits of the number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number to check whether it is armstrong or not :\n");
    scanf("%d",&n);
    int a,n1=0,N=n;
    while(n>0)
    {
        a=n%10;
        n1=n1+a*a*a;
        n=n/10;
    }   
    if(N==n1)
    {
        printf("The given number %d is a armstrong number",N);
    }
    else
    {
        printf("The given number %d is not a armstrong number",N);
    }
}