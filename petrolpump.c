#include <stdio.h>
#include <dos.h>     
#include <stdlib.h>  

int main() 
{
    float petrolPrice = 106.49; 
    float enteredAmount;
    float currentAmount = 0.0;
    float fuelFilled = 0.0;

    printf("Enter amount you want to fill (in Rs): ");
    scanf("%f", &enteredAmount);

    printf("\nFilling Started...\n");
    delay(1000);  

    while (currentAmount < enteredAmount) 
    {
        system("cls");  

        currentAmount += 1.0;  
        fuelFilled = currentAmount / petrolPrice;

        if (currentAmount > enteredAmount) 
        {
            currentAmount = enteredAmount;
            fuelFilled = currentAmount / petrolPrice;
        }

        printf("Amount: Rs %.2f\n", currentAmount);
        printf("Litres: %.2f L\n", fuelFilled);
        
        delay(50);  
    }

    printf("\nFilling Complete. Please take your bill.\n");
    printf("Total Amount: Rs %.2f\n", enteredAmount);
    printf("Total Litres: %.2f L\n", enteredAmount / petrolPrice);

    return 0;
}