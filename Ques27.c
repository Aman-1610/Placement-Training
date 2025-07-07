#include<stdio.h>
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("Given Number is positive.");
    }
    else if(num<0)
    {
        printf("Given number is negative.");
    }
    else{
        printf("Given number is neither positive nor negative.");
    }
    return 0;
}