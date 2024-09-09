//WAP to find out factors of a given number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number to find its factors :\n");
    scanf("%d",&n);
    int a=1;
    printf("The factors of the given number %d are :",n);
    while(a<=n)
    {
        if(n%a==0)
        {
            printf(" %d ,",a);
            a=a+1;
        }
        else
        {
            a=a+1;
        }
    }
    return 0;
}
