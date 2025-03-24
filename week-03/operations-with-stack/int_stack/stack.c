
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void createStack(int capacity, Stack_t *stack) {
    stack->capacity = capacity;
    stack->top = -1;
    stack->elements = (int*)malloc(capacity * sizeof(int));
}

void destroyStack(Stack_t* stack) {
    free(stack->elements);
    stack->elements = NULL;
    stack->top = -1;
    stack->capacity = 0;
}

bool isFull(Stack_t stack) {
    return stack.top == stack.capacity - 1;
}

bool isEmpty(Stack_t stack) {
    return stack.top == -1;
}

void push(Stack_t* stack, int item) {
    if (!isFull(*stack)) {
        stack->elements[++stack->top] = item;
    } else {
        printf("Stack overflow! Cannot push %d.\n", item);
    }
}

int pop(Stack_t* stack) {
    if (!isEmpty(*stack)) {
        return stack->elements[stack->top--];
    } else {
        printf("Stack underflow! Cannot pop.\n");
        return -1;
    }
}

int peek(Stack_t stack) {
    if (!isEmpty(stack)) {
        return stack.elements[stack.top];
    } else {
        printf("Stack is empty! Cannot peek.\n");
        return -1;
    }
}

int size(Stack_t stack) {
    return stack.top + 1;
}

