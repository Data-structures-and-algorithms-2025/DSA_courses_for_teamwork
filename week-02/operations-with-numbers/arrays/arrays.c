//
// Created by palma on 2/23/2025.
//

#include "arrays.h"
#include "stdlib.h"
#include "time.h"
#include "stdio.h"


void fillWithRandom(int *array, int n, int start, int end) {
    srand(time(0));
    for (int i=0;i<n;i++) {
        array[i]=(end-start)*rand()/RAND_MAX*start;
        //=start + rand() % (end - start + 1);
    }
}

