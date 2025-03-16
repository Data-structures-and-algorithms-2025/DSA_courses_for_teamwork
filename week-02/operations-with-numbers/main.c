#include <stdio.h>
#include "arrays.h"
#include "utils.h"
#include "algorithms.h"

int main(void) {
    int n;
    printf("Add meg az n-t: ");
    scanf("%i",&n);
    int tomb[n];
    int start=1,end=765;
    fillWithRandom(tomb,n,start,end);
    printArray(tomb,n);
    int count=0;
    for (int i=0;i<n;i++) {
        if (isPrime(tomb[i])) {
            count++;
        }
    }
    printf("Number of primes: %i",count);
    return 0;
}
