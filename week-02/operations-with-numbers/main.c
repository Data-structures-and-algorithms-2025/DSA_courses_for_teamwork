#include <stdio.h>
#include <stdlib.h>
#include "algorithms.h"
#include "utils.h"
#include "arrays.h"


int main(void) {
    /**
     * TODO: read n from console - number of elements
     * TODO: declare an arrays (no dynamic memory allocation needed)
     * TODO: fill the arrays with random values between [1, 10]
     * TODO: print the arrays
     * TODO: calculate and print the number of prime numbers
     */
    int n,sz=0;
    scanf("%i",&n);
    int Array[n];
    fillWithRandom(Array,n,1,10);
    printArray(Array,n);
    for(int i=0; i<n; i++) {
        if(isPrime(Array[i])) {
            sz++;
        }
    }
    printf("Number of primes: %i",sz);
    return 0;
}
