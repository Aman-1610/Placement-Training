#include<stdio.h>
int main()
{
    int n,a=-1,b=1,fibonacci=0;
    printf("give the value of n: ");
    scanf("%d",&n);
    int count=0;
    while(count<n)
    {
        fibonacci = a+b;
        a=b;
        b=fibonacci;
        printf("\n %d",fibonacci);
        ++count;
    }
    return 0;
}