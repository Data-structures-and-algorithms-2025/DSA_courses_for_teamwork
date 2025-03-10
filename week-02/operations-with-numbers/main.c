#include <stdio.h>
#include "arrays/arrays.h"
#include "algorithms/algorithms.h"
#include "utils/utils.h"

int main(void) {
    /**
     * TODO: read n from console - number of elements
     * TODO: declare an arrays (no dynamic memory allocation needed)
     * TODO: fill the arrays with random values between [1, 10]
     * TODO: print the arrays
     * TODO: calculate and print the number of prime numbers
     */


    int n ;
    int array[100];
    int start =1 , end = 10;

    scanf("%i", &n);

    fillWithRandom(array,  n, start,  end);
    printArray(array, n);

    int count = 0;
    for(int i=0;i<n;i++) {
        if(isPrime(n) == 1){
            count++;
        }
    }

    printf("Number of prime numbers: %d", count);

    return 0;
}
