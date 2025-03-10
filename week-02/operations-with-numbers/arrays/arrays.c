//
// Created by palma on 2/23/2025.
//

#include "arrays.h"
#include <stdio.h>
#include <stdlib.h>

void printArray(int *array, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
}
//sawdsdsa

void fillWithRandom(int *array, int n, int start, int end) {
    for(int i = 0; i < n; i++) {
        array[i] = rand() % (end - start) + start;
    }
    //ran
}