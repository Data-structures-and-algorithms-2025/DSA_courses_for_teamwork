//
// Created by oszti on 3/16/2025.
//

#include "stack.h"
#include <stdio.h>
#include <stdlib.h>


void createStack(int capacity, STACK * stack){
    stack=malloc(sizeof(STACK));
    stack->capacity = capacity;
    stack->items = (int *)malloc(stack->capacity * sizeof(int));
    stack->top = -1;
    if(!stack->items){
      printf("Memory allocation error\n");
    }
}

void destroyStack(STACK* stack) {
    free(stack->items);
    free(stack);
}

bool isFull(STACK stack) {
    if (stack.capacity==stack.top+1) {
        return true;
    }
    return false;
}

bool isEmpty(STACK stack) {
    if (stack.top==-1) {
        return true;
    }
    return false;
}

void push(STACK *stack, int item) {
    if (!isFull(*stack)) {
        stack->items[++stack->top] = item;
    }
}

int pop(STACK *stack) {
    int temp=stack->items[stack->top];
    if (!isEmpty(*stack)) {
        stack->items[stack->top] = NULL;
        stack->top--;
    }
    return temp;
}

int peek(STACK stack) {
    return stack.items[stack.top];
}

int size(STACK stack) {
    return stack.top+1;
}




