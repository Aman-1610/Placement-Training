#include<stdio.h>
int main()
{
    int customerId,units;
    char name[50];
    float bill;
    printf("Enter the customer Id: ");
    scanf("%d",&customerId);
    printf("Enter Customer Name: ");
    scanf("%s", name);
    printf("Enter used units: ");
    scanf("%d",&units);
    if(units<=199)
    {
        bill = 1.20 * units;
    }
    else if(units>=200&&units<=399)
    {
        bill = 5.20 * units;
    }
    else 
    {
        bill = 7.20 * units;
    }
    printf("\nElectricity Bill\n");
    printf("Customer ID   : %d\n", customerId);
    printf("Customer Name : %s\n", name);
    printf("Units Consumed: %d\n", units);
    printf("Total Bill    : ₹%.2f\n", bill);
    return 0;
}