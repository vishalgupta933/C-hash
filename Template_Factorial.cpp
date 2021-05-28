#include <iostream>


template<typename Fact>
Fact factorial( Fact n ) {
    
    if (n>=1)
        return n*factorial(n-1);
    else
        return 1;
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("factorialorial of %d = %ld", n, factorial(n));

    return 0;
}

