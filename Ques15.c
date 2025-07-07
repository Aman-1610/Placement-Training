//formula for finding volume of a cyclinder is (PI*r*r*h)
#include<stdio.h>
float const PI = 3.14;
int main()
{
    float r,h,volume;
    printf("Enter the radius of the cylinder: ");
    scanf("%f",&r);
    printf("Enter the height of the cylinder: ");
    scanf("%f",&h);
    volume = PI*r*r*h;
    printf("Volume of the cylinder is: %.2f",volume);
    return 0;
}