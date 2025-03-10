#include <stdio.h>
#include <stdlib.h>
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
    int n,count;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int *array = (int *)calloc(n, sizeof(int));
    fillWithRandom(array, n, 1, 10);
    printArray(array, n);
    for (int i = 0; i < n; i++) {
        if (isPrime(array[i])) {
            count++;
        }
    }
    printf("\nNumber of primes %i", count);
    return 0;
}