#include<stdio.h>
static const float PI =3.14;
int main()
{
    int radius;
    float area;
    printf("Enter the radius of the circle: ");
    scanf("%d",&radius);
    area = PI * radius * radius;
    printf("The area of the circle is: %.2f\n",area);
    return 0;
}