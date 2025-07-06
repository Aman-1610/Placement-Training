#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the third number: ");
    scanf("%d",&c);
    int max_value = (a+b+abs(a-b))/2;
    max_value = (max_value+c+abs(max_value-c))/2;
    printf("%d is the greatest number.",max_value);
    return 0;
}