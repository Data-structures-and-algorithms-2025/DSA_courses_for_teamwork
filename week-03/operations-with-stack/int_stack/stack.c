//
// Created by oszti on 3/16/2025.
//

#include "stack.h"
#include <stdlib.h>
#include<stdio.h>

void createStack(int capacity, Stack_t *stack) {
    stack->capacity = capacity;
    stack->top = -1;
    stack->items =(int*)malloc(capacity* sizeof(int));
}

void destroyStack(Stack_t *stack) {
    stack->capacity = 0;
    stack->top = -1;
    free(stack->items);
    stack = NULL;
}

bool isFull(Stack_t stack) {
    return stack.top == stack.capacity -1;
}

bool isEmpty(Stack_t stack) {
    return stack.top == -1;
}

void push(Stack_t *stack, int item) {
    if(isFull(*stack)) {
        printf("The stack is full!\n");
        //exit(-1);
    }
    else {
        stack->items[++stack->top] = item;
    }
}

int pop(Stack_t *stack) {
    if( isEmpty(*stack)) {
        printf("The stack is empty!\n");
        return 0;
    }
    else {
        int save = stack->items[stack->top];
        stack->items[stack->top--] = INT_MIN;
        return save;
    }
}

int peek(Stack_t stack) {
    if( isEmpty(stack)) {
        printf("The stack is empty!\n");
        return 0;
    }
    else {
        return  stack.items[stack.top];
    }
}

int size(Stack_t stack) {
    return stack.top+1;
}

