#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
     */ int n;
    int *array;
      int s=1,e=99;
    fillWithRandom(array,n,s,e);

              printArray(*array,n);
    int count=0;
    for (int i=0;i<n;i++) {
        if (isPrime(array[i])==1) {
            count++;
        }
    }
    return 0;
}
