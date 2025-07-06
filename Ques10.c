//formula of volume of sphere is (4/3)*pi*r^3
#include<stdio.h>
#define PI 3.14
int main()
{
    int radius;
    float volume;
    printf("Enter the radius of the sphere: ");
    scanf("%d",&radius);
    volume = (4/3)*PI*radius*radius*radius;
    printf("The volume of the sphere is: %.2f\n",volume);
    return 0;
}