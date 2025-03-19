#include <stdio.h>
#include <time.h>
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

    //reading n from console
    printf("Please give the number of elements: ");
    int n;
    scanf("%d", &n);

    // declaring the array without dynamic alloc
    int array[n];

    // filling the array with random values
    srand(time(NULL));
    fillWithRandom(&array, n, 1, 10);

    //printing the array
    printArray(array, n);

    // calc and print the nr of primes
    int countPrime = 0;

    for (int i =0; i <n; i++)
    {
        if (isPrime(array[i])) countPrime++;

    }
    printf("There are %d prime numbers in the array.", countPrime);

    return 0;
}
