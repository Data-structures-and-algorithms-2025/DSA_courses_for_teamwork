//
// Created by Dora on 2025. 03. 17..
//

#include "stack.h"
#include <stdlib.h>


void createStack(int capacity, Stack_t* stack){
  stack->capacity = capacity;
  stack->top = -1;
  stack->elements = (int *)malloc(stack->capacity, sizeof(int));

  if(!(stack->elements)){
    printf("error");
    exit(-1);
   }
}


void destroyStack(Stack_t* stack){
  stack->capacity=0;
  stack->top=-1;
  free(stack->elements);
  stack = NULL;
}