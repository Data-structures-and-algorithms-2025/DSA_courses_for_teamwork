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
     */
    int n;
    scanf("%d", &n);
    srand(time(0));
    int a[n];
    fillWithRandom(a, n, 1, 10);
    printArray(a, n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) {
            sum++;
        }
    }
    printf("\n%d", sum);

    return 0;
}
