#include <stdio.h>
#include <dos.h>      // for delay()
#include <stdlib.h>   // for system("cls")

int main() 
{
    float petrolPrice = 106.49; // Rs/litre
    float enteredAmount;
    float currentAmount = 0.0;
    float fuelFilled = 0.0;

    printf("=====================================\n");
    printf("       Welcome to Petrol Pump        \n");
    printf("=====================================\n");
    printf("Petrol Price: %.2f Rs/litre\n", petrolPrice);
    printf("Enter amount you want to fill (in Rs): ");
    scanf("%f", &enteredAmount);

    printf("\nFilling Started...\n");
    delay(1000);  // 1 second delay

    while (currentAmount < enteredAmount) 
    {
        system("cls");  // Clear screen

        currentAmount += 1.0;  // increment amount by Rs.1
        fuelFilled = currentAmount / petrolPrice;

        if (currentAmount > enteredAmount) 
        {
            currentAmount = enteredAmount;
            fuelFilled = currentAmount / petrolPrice;
        }

        printf("=====================================\n");
        printf("        Filling Petrol...\n");
        printf("Amount: Rs %.2f\n", currentAmount);
        printf("Litres: %.2f L\n", fuelFilled);
        printf("=====================================\n");

        delay(50);  // 50 milliseconds delay
    }

    printf("\nFilling Complete. Please take your bill.\n");
    printf("Total Amount: Rs %.2f\n", enteredAmount);
    printf("Total Litres: %.2f L\n", enteredAmount / petrolPrice);

    return 0;
}