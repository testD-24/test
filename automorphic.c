//WAP to check whether a number is automorphic or not
//25*25=625,,76*76=5776....number=last 2 digits of the sqauare of the number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number to check whether it is automorphic or not :\n");
    scanf("%d",&n);
    int n1=n*n;
    int a=n1%100; 
    if(a==n)
    {
        printf("The given number %d is an automorphic number",n);
    }
    else
    {
        printf("The given number %d is not an automorphic number",n);
    }
}