//WAP to find out HCF & LCM of any two numbers given by the user
#include <stdio.h>
int main()
{
    int a,b;
    int min,HCF,LCM;
    printf("Enter any two numbers to find out their HCF & LCM :\n");
    scanf("%d",&a);
    scanf("%d",&b);
    if(a==b)
    {
        min=a;
    }
    else if(b<=a)
    {
        min=b;
    }
    else 
    {
        min =a;
    }
    while(min>=1)
    {
        if (a%min==0 && b%min==0 )
        {
            HCF=min;
            break;
        }
        else
        {
            min=min-1;
        }
    }
    LCM=(a*b)/HCF;
    printf("The HCF & LCM of the given numbers %d,%d are %d AND %d respectively",a,b,HCF,LCM);
    return 0;
}