#include <stdio.h>

#include "arrays/arrays.h"
#include "utils/utils.h"
#include "algorithms/algorithms.h"

int main(void) {
    /**
     * TODO: read n from console - number of elements
     * TODO: declare an arrays (no dynamic memory allocation needed)
     * TODO: fill the arrays with random values between [1, 10]
     * TODO: print the arrays
     * TODO: calculate and print the number of prime numbers
     */
    int n;
    scanf("%d", &n);
    int arr[n];
    fillWithRandom(arr,n,0,10);
    printArray(arr,n);
    printf("\n%d",primecount(arr,n));

    return 0;
}
