#include <stdio.h>
#include <time.h>
#include "utils.h"
#include "algorithm.h"
#include "array.h"

int main(void) {
    /**
     * TODO: read n from console - number of elements
     * TODO: declare an arrays (no dynamic memory allocation needed)
     * TODO: fill the arrays with random values between [1, 10]
     * TODO: print the array
     * TODO: calculate and print the number of prime numbers
     */
    int number;
    int min=1, max=10000;
    scanf("%d", &number);
    int array[number];
    fillWithRandom(array, number);

    printArray(array, number);
    int sum=0;
    for(int i=0; i<=number; i++) {
      if(isPrime(array[i])) {
        sum += 1;
      }
    }
    printf("ennyi primszam %d\n", sum);

    return 0;
}
