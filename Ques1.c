#include<stdio.h>
int main()
{
    int length,breadth;
    float area;
    printf("Enter the length of the rectangle: ");
    scanf("%d",&length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d",&breadth);
    area = length * breadth;
    printf("The area of the rectangle is: %.2f\n",area);
    return 0;
}