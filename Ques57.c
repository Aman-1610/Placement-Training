#include <stdio.h>
#include <math.h>

int main()
{
    int num, original, rem, digits = 0, result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    int temp = num;
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        result += pow(rem, digits);
        temp /= 10;
    }

    if (result == original)
    {
        printf("%d is an Armstrong number.\n", original);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
