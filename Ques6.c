#include<stdio.h>
int main()
{
    int p,t;
    float r,si;
    printf("Enter the principal amount: ");
    scanf("%d",&p);
    printf("Enter the rate of the interest: ");
    scanf("%f",&r);
    printf("Enter the time in years: ");
    scanf("%d",&t);
    si=(p*r*t)/100;
    printf("The simple interest is: %.2f\n",si);
    return 0;
}