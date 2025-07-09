#include<stdio.h>
int main()
{
    int a,b,GCD=1;
    printf(" enter the two value for finding out the GCD : ");
    scanf("%d %d", &a, &b);
    int min=(a<b)?a:b;
    for(int i=1;i<=min;i++)
    {
        if(a%i==0&&b%i==0)
        {
            GCD = i;
        }
    }
    printf("HCF of %d and %d is %d",a,b,GCD);
    return 0;
}