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
    printf("Enter of numbers elements:");
    scanf("%d",&n);
    int array[n];
    fillWithRandom(array,n,1,10);
    printf("Generated array:");
    printArray(array,n);
    if (isPrime(n)) {
        printf("Is prime number\n");
    }else printf("IS not");
    return 0;
}
