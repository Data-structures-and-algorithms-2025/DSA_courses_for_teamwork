#include <stdio.h>
#include "arrays/arrays.h"

int main(void) {
    /**
     * TODO: read n from console - number of elements
     * TODO: declare an arrays (no dynamic memory allocation needed)
     * TODO: fill the arrays with random values between [1, 10]
     * TODO: print the arrays
     * TODO: calculate and print the number of prime numbers
     */

    int n ;
    int *array;

    scanf("%i", &n);

    fillWithRandom(array,  n, start,  end);
    boolIsPrime(n);
    printArray(array, n);

    int count = 0;
    for(int i=0;i<n;i++){
      if(isPrime(n) == 1){
        count++;
    }

    printf("Number of prime numbers: %d", count);



    return 0;
}
