//
// Created by oszti on 3/16/2025.
//

#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

void createStack(int capacity, Stack_t * stack) {
    stack->capacity = capacity;
    stack->top = -1;
    stack->items = (int *)malloc(capacity * sizeof(int));
    if (stack->items == NULL) {
        printf("Memory allocation failed.\n");
        exit(-1);
    }
}
void destroyStack(Stack_t* stack) {
    free(stack->items);
    stack->items = NULL;
}
bool isFull(Stack_t stack) {
    return stack.top == stack.capacity-1;
}
bool isEmpty(Stack_t stack) {
    return stack.top == -1;
}
void push(Stack_t* stack, int item) {
    if (!isFull(*stack)) {
        stack->items[++stack->top] = item;
    }
    else {
        printf("Stack is full.\n");
    }
}
int pop(Stack_t* stack) {
    if (!isEmpty(*stack)) {
        stack->items[stack->top--];
    }
    else {
        printf("Stack is empty.\n");
        exit(-1);
    }
}
int peek(Stack_t stack) {
    if (!isEmpty(stack)) {
        return stack.items[stack.top];
    }
    else {
        printf("Stack is empty.\n");
        exit(-1);
    }
}
int size(Stack_t stack) {
    return stack.capacity;
}

