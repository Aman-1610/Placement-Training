#include <stdio.h>

int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
/*             fib(4)
             /        \
         fib(3)        fib(2)
        /     \        /    \
    fib(2)   fib(1)  fib(1) fib(0)
   /     \
fib(1)  fib(0)
*/
/*
fib(4) = fib(3) + fib(2)
       = (fib(2)+fib(1)) + (fib(1)+fib(0))
       = ((1+0)+1) + (1+0)
       = (1+1)+1 = 3
fib(3) = fib(2) + fib(1)
       = (fib(1)+fib(0)) + fib(1)
       = (1+0) + 1
       = 1 + 1 = 2
fib(2) = fib(1) + fib(0)
       = 1 + 0 = 1
fib(1) = 1
fib(0) = 0
*/