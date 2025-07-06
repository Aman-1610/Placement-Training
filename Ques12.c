#include<stdio.h>
int main()
{
    float speed,time,distance;
    printf("Enter the distance in km: ");
    scanf("%f",&distance);
    printf("ENter the time in hr: ");
    scanf("%f",&time);
    speed = distance/time;
    printf("speed: %.2f km/hr",speed);
    return 0;
}