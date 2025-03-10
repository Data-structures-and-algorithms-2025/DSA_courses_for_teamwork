//
// Created by palma on 2/23/2025.
//

#include "arrays.h"
#include <stdio.h>
#include <stdlib.h>


void fillWithRandom(int *array, int n, int start, int end) {
    if (start>end) {
        printf("Nem lehet a kezdet nagyobb mint a felo hatar");
        return;
    }

    for (int i= 0; i<n ; ++i) {
        array[i] = start + rand() % (end - start + 1);
    }
}
