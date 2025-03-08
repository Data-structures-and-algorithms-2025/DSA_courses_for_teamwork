#include <stdio.h>
#include <stdlib.h>

void printArray(int n, int array[]);
void fillArrayWithNumbers(int n, int array[]);



int main(void) {
    /**
     * TODO: read n from console - number of elements
     * TODO: declare an arrays (no dynamic memory allocation needed)
     * TODO: fill the arrays with random values between [1, 10]
     * TODO: print the arrays
     * TODO: calculate and print the number of prime numbers
     */
    return 0;
}
void printArray(int n, int array[]) {
    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
}
void fillArrayWithNumbers(int n, int array[]) {
    for(int i = 0; i < n; i++) {
        array[i] = rand() % (10 - 1) + 1;
    }
}