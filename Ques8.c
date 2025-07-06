#include<stdio.h>
int main()
{
    float farenheit,celsius;
    printf("Enter the Fahrenheit temperature: ");
    scanf("%f",&farenheit);
    celsius = (farenheit - 32) * 5/9;
    printf("The temperature in Celsius is: %.2f\n",celsius);            
    return 0;
}