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
     * TODO: calculate and print the number of prime number
     */
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int array[n];
    fillWithRandom(array, n, 1, 10);
    printf("\nThe random generated array elements:\n ");
    printArray(array, n);
    printf("\nChecking how many prime elements are in sequence\n");
    int num_prime = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(array[i])) {
            num_prime++;
        }
    }
    printf("\nNumber of prime elements: %d\n", num_prime);
    return 0;
}
