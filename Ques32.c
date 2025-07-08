#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);
    int max=(a>b)?a:b;
    max=(max>c)?max:c;
    printf("max value: %d",max);
    return 0;
}