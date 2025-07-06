#include<stdio.h>
int main()
{
    float celsius,farenheit;
    printf("Enter the temperature in celsius: ");
    scanf("%f",&celsius);
    farenheit = (celsius*9/5)+32;
    printf("The temperature in farenheit is: %.2f\n",farenheit);
    return 0;
}