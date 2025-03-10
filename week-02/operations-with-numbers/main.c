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
    scanf("%d",&n);
    int array[n];
    fillWithRandom(array,n,1,10);
    printArray(array,n);


    int sum=0;
    for (int i=0;i<n;i++)
    {
        if (isPrime(array[i]))
        {
            sum++;
        }
    }

    printf("Ennyi prim szam van: %d",sum);


    return 0;
}
