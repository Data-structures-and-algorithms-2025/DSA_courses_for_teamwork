//
// Created by oszti on 3/16/2025.
//

#include "stack.h"

#include <stdio.h>
#include <stdlib.h>

void createStack(int capacity, Stack_t *stack) {
    stack->top=-1;
    stack->elements=(int*)malloc(sizeof(int)*capacity);
    if (!stack->elements) {
        printf("Memory allocation error");
    }
}

void destroyStack(Stack_t *stack) {
    stack->top=-1;
    free(stack->elements);
}

bool isFull(Stack_t stack) {
    return stack.top == stack.capacity;
}

int isEmpty(Stack_t stack) {
    return  stack.top == -1;
}

void push(Stack_t *stack, int item) {
    if (!isFull(*stack))
    stack->elements[++stack->top]=item;
    else {
        printf("\nStack is Full\n");
    }
}

int pop(Stack_t *stack) {
    if (!isEmpty(*stack))
    stack->top-=1;
    else {
        printf("Stack is empty");
        return -3;
    }
}

int peek(Stack_t stack) {
    return stack.elements[stack.top];
}

int size(Stack_t stack) {
    return stack.top;
}
