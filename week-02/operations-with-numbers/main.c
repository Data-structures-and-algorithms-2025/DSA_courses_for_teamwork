#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "algorithms/algorithms.h"
#include "arrays/arrays.h"
#include "utils/utils.h"


int main(void) {


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
