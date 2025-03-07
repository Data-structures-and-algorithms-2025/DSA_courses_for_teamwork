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
    int n;
    int k=0;
    scanf("%i",&n);
    int array[100];
    ArrayDeclar(array,n);
    fillWithRandom(array,n,1,10);
    printArray(array,n);
for (int i=0;i<n;i++) {
    if (isPrime) {
        k++;
    }
}
printf("The number of prime numbers is %i",k);

    return 0;
}
