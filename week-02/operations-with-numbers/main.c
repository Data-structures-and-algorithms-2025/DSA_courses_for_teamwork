#include <stdio.h>

#include "algorithms/algorithms.h"
#include "arrays/arrays.h"

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
    int t[n];
    fillWithRandom(t,n,1,10);
    int primesum=0;
    for(int i=0;i<n;i++) {
        printf("%d ",t[i]);
        if(isPrime(t[i])) primesum++;
    }
    printf("\n%d",primesum);

    return 0;
}
