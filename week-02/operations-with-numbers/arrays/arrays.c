//
// Created by palma on 2/23/2025.
//
#include <time.h>
#include<stdlib.h>
#include "arrays.h"
void fillWithRandom(int *array, int n, int start, int end) {
  srand(time(NULL));
  for(int i = 0; i < n; i++) {
    array[i]=rand()%(end-start+1)+start;
  }
}
void ArrayDeclar(int *array, int n){
  malloc(n*sizeof(int));
}
