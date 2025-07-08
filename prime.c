#include <stdio.h>

int main() {
    int i = 2;

    printf("Prime numbers up to 3000 are:\n");

    while (i <= 3000) {
        int j = 2;
        int isPrime = 1; // assume i is prime

        while (j * j <= i) {
            if (i % j == 0) {
                isPrime = 0; // not a prime
                break;
            }
            j++;
        }

        if (isPrime) {
            printf("%d ", i);
        }

        i++;
    }

    printf("\n");
    return 0;
}
