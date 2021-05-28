#include <cstdio>

// non-recursive factorial
unsigned long int factorial( unsigned long int n ) {
    int fact = 1;
    // the product of all numbers 2 through n
    for (int i = 0; i <= n; i++)
    {
        if(i <= 1)
        {
            fact = 1;
        }

        else{
            fact = fact * i;
        }
    }

    return fact;
}

int main() {
    unsigned long int n = 5;
    printf("Factorial of %ld is %ld\n", n, factorial(n));
    return 0;
}