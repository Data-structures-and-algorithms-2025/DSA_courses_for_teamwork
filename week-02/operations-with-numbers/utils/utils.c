//
// Created by palma on 2/23/2025.
//

#include "utils.h"
#include <stdio.h>

void printArray(int *array, int n) {
    printf("%i",array[0]);
    for(int i=0;i<n;i++) {
        printf(" %i",array[i]);
    }
    printf("\n");
}