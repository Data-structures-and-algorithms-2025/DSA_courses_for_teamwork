//
// Created by palma on 2/23/2025.
//

#include "utils.h"

#include <stdio.h>

void printArray(int *array, int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            printf("%i ",array[i]);
        }
        printf("\n");
    }

}
