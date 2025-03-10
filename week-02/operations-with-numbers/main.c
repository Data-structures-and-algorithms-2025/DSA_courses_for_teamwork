#include <stdio.h>

#include "algorithms/algorithms.h"
#include "arrays/arrays.h"
#include "utils/utils.h"

int main(void) {
    /**
     * TODO: read n from console - number of elements
     * TODO: declare an arrays (no dynamic memory allocation needed)
     * TODO: fill the arrays with random values between [1, 10]
     * TODO: print the arrays
     * TODO: calculate and print the number of prime numbers
     */
    int n;
    printf("Add meg az n-t: ");
    scanf("%i",&n);
    int tomb[n];
    int start=1,end=765;
    fillWithRandom(tomb,n,start,end);
    printArray(tomb,n);
    int count=0;
    for (int i=0;i<n;i++) {
        if (isPrime(tomb[i])) {
            count++;
        }
    }
    printf("Number of primes: %i",count);
    return 0;
}
