//
// Created by oszti on 3/16/2025.
//

#include "stack.h"

#include <stdio.h>
#include <stdlib.h>

void createStack(int capacity, Stack_t *stack) {
    stack->capacity = capacity;
    stack->top = -1;
    stack->elemek = (int *) malloc(capacity * sizeof(int));
    if (!stack->elemek) {
        printf("Hibas helyfoglalas");
        exit(-1);
    }
}

void destroyStack(Stack_t *stack) {
    if (stack->elemek != NULL) {
        free(stack->elemek);
        stack->elemek=NULL;
    }
    stack->top=-1;
    stack->capacity=0;
}

bool isFull(Stack_t stack) {
    return stack.top==stack.capacity-1;
}


