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
    printf("kerlek adj meg egy szamot\n");
    scanf("%d",&n);
    int tomb[n];
    fillWithRandom(tomb,n,1,10);
    printArray(tomb,n);
    int count=0;
    for (int i=0;i<n;i++) {
        int number=tomb[i];
        if (isPrime(number)) {
            count++;
        }
    }
    printf("Count of primes: %i",count);
    return 0;
}
