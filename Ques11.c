#include<stdio.h>
int main()
{
    int a,b,c;
    float average;
    printf("ENter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the third number: ");
    scanf("%d",&c);
    average = (a+b+c)/3.0;
    printf("The average of the three number is: %.2f\n",average);
    return 0;
}