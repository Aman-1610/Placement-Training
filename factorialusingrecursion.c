#include<stdio.h>
int fac(int n )
{
    if(n==0)
    {
        return 1;
    }
    return n*fac(n-1);
}
int main()
{
    int n;
    printf("nter the number: ");
    scanf("%d",&n);
    printf("%d",fac(n));
}
