#include<stdio.h>
int main()
{
    int l1,l2,height,area;
    printf("Enter the first length of the parallel side of a trapezoid: ");
    scanf("%d",&l1);
    printf("Enter the second length of the parallel side of a trapezoid: ");
    scanf("%d",&l2);
    printf("Enter the height of the trapezoid: ");
    scanf("%d",&height);
    area = 0.5*(l1+l2)*height;
    printf("Area of the trapezoid: %d",area);
    return 0;
}