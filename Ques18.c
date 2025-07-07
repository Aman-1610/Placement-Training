#include<stdio.h>
#include<math.h>
int main()
{
    int p,b;
    float h;
    printf("Enter the base of the triangle: ");
    scanf("%d",&b);
    printf("Enter the perpendicular of the triangle: ");
    scanf("%d",&p);
    h = sqrt((b*b)+(p*p));
    printf("Hypotenuse = %.2f",h);
    return 0;
}