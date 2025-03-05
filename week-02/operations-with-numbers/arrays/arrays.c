//
// Created by palma on 2/23/2025.
//

#include "arrays.h"

#include <stdlib.h>

void fillWithRandom(int *array, int n, int start, int end) {
    for (int i = 0; i < n; ++i) {
        array[i]=rand()%(end-start)+1+start;
    }
}
