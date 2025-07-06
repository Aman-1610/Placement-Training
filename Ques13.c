//formula of finding kinetic energy : 0.5*m*v*v
#include<stdio.h>
int main()
{
    float mass,velocity,kineticEnergy;
    printf("Enter the mass in kg: ");
    scanf("%f",&mass);
    printf("Enter the velocity in m/s: ");
    scanf("%f",&velocity);
    kineticEnergy = 0.5*mass*velocity*velocity;
    printf("Kinetic Energy is: %.2f J",kineticEnergy);
    return 0;
}