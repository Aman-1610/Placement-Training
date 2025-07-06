#include<stdio.h>
float const PI=3.14;
int main()
{
    int radius;
    float circumference;
    printf("Enter the radius of the circle: ");
    scanf("%d",&radius);
    circumference =2*PI*radius;
    printf("The circumference of the circle is: %.2f\n",circumference);
    return 0;
}