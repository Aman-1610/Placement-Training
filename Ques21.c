#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the first number: ");
    scanf("%d",&b);
    if(a==b)
    {
        printf("a and b are equal.");
    }
    else{
        printf("a and b are not equal.");
    }
    return 0;
}