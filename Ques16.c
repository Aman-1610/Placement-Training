#include<stdio.h>
int main()
{
    int side;
    printf("Enter the side of the cube: ");
    scanf("%d",&side);
    int TSA = 6*side*side;
    printf("Total surface are of a cube is: %d",TSA);
    return 0;
}