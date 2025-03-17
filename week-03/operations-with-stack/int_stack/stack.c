//
// Created by oszti on 3/16/2025.
//

#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
void createStack(int capacity, Stack_t *stack) {
    stack->c = capacity;
    stack->top = -1;
    stack->items = (int*)malloc(capacity * sizeof(int));
}

void destroyStack(Stack_t* stack) {
    free(stack->items);
    stack->items = NULL;
    stack->top = -1;
    stack->c = 0;
}

bool isFull(Stack_t stack) {
    return stack.top == stack.c - 1;
}

bool isEmpty(Stack_t stack) {
    return stack.top == -1;
}

void push(Stack_t* stack, int item) {
    if (isFull(*stack)) {
        printf("Stack overflow!\n");
        return;
    }
    stack->items[++stack->top] = item;
}

int pop(Stack_t* stack) {
    if (isEmpty(*stack)) {
        printf("Stack underflow!\n");
        return -1;
    }
    return stack->items[stack->top--];
}

int peek(Stack_t stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
        return -1;
    }
    return stack.items[stack.top];
}

int size(Stack_t stack) {
    return stack.top + 1;
}
