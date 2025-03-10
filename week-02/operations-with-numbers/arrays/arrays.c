//
// Created by palma on 2/23/2025.
//

#include "arrays.h"

#include <stdlib.h>
#include <time.h>

void fillWithRandom(int *array, int n, int start, int end) {
    srand(time(NULL));
    for(int i = 0; i < n; i++) {
        array[i] = start + rand()% end - start + 1;
    }
}
