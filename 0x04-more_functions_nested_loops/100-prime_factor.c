#include <stdio.h>
#include <math.h>

int main(void) {
    long int n = 612852475143;
    long int largest_prime_factor = 1;
    int i;
    
    // Check for factors of 2
    while (n % 2 == 0) {
        largest_prime_factor = 2;
        n /= 2;
    }
    
    // Check for factors up to sqrt(n)
    for (i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            largest_prime_factor = i;
            n /= i;
        }
    }
    
    // If n is a prime number greater than 2
    if (n > 2) {
        largest_prime_factor = n;
    }
    
    printf("%ld\n", largest_prime_factor);
    
    return 0;
}
