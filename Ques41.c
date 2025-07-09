#include<stdio.h>
int main()
{
    int num,factorial=1;
    
    printf("Enter the positive number: ");
    scanf("%d",&num);
    int temp=num;
    if(num>=0)
    {
        while(num>0)
        {
            factorial *= num;
            --num;
        }
        printf("Factorial of %d is: %d",temp,factorial);
    }
    else{
        printf("Factorial not defined for negative numbers.");
    }
    return 0;
}