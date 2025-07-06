#include<stdio.h>
int main()
{
    float percentage;
    printf("ENter the percentage obtained in 12th grade: ");
    scanf("%f",&percentage);
    if(percentage >= 65)
    {
        printf("You are eligible for the admission in the BTech CSE course");
    }
    else if(percentage >=50)
    {
        printf("You are eligible for the IT branch.");
    }
    else
    {
        printf("You are not eligilbe for the admission in the following college.");
    }
    return 0;
    
}