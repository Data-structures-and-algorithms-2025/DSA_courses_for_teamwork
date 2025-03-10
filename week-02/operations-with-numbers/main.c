#include <stdio.h>
#include "algorithms/algorithms.h"
#include "arrays/arrays.h"
#include "utils/utils.h"
#include <time.h>


/**
     * TODO: read n from console - number of elements
     * TODO: declare an arrays (no dynamic memory allocation needed)
     * TODO: fill the arrays with random values between [1, 10]
     * TODO: print the arrays
     * TODO: calculate and print the number of prime numbers
     */


int main() {
    int n;
    printf("Enter how many elements you'd like to be in the array: \n");
    scanf("%d", &n); //number of elements
    int array[n]; //static declaration of the array
    fillWithRandom(array, n, 1, 10); //filling it with random numbers from 1 to 10
    printf("The array you created is: ");
    printArray(array, n,"\n"); //printing the array
    int primeCount = countPrimes(array, n); //counting the primes
    printf("Number of prime numbers: %d\n", primeCount); //printing the primes

    return 0;
}
