#include <stdio.h>

#include "algorithms/algorithms.h"
#include "arrays/arrays.h"
#include "utils/utils.h"

int main(void) {
    /**
     * TODO: read n from console - number of element
     * TODO: declare an arrays (no dynamic memory allocation needed)
     * TODO: fill the arrays with random values between [1, 10]
     * TODO: print the arrays
     * TODO: calculate and print the number of prime numbers
     */
    
    int n;
    scanf("%d",&n);
    int a[n];
    fillWithRandom(a,n,0,n-1);
    printArray(a, n);
    int db=0;
    for (int i=0;i<n;i++) {
        if (isPrime(a[i])) {
            db++;
        }
    }
    printf("A primszamok szama:%d",db);



    return 0;
}
