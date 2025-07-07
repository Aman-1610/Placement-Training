#include<stdio.h>
int main()
{
    float voltage,current,power;
    printf("ENter voltage (V): ");
    scanf("%f",&voltage);
    printf("Enter current (A): ");
    scanf("%f",&current);
    power = voltage*current;
    printf("Electric power = %.2f",power);
    return 0;
}