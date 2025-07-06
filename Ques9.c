#include<stdio.h>
int main()
{
    int side,volume;
    printf("Enter the side of the cube: ");
    scanf("%d",&side);
    volume = side * side * side;        
    printf("The volume of the cube is: %d\n",volume);
    return 0;
}