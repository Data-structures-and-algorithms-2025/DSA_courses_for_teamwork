//
// Created by Dani on 3/8/2025.
//

#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

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
