//
// Created by oszti on 3/16/2025.
//

#include "stack.h"

#include <stdio.h>
#include <stdlib.h>

void createStack(int capacity, Stack_t * stack) {
    stack->elements=(int*)calloc(capacity,sizeof(int));
    stack->capacitiy=capacity;
    stack->top=0;
}
void destroyStack(Stack_t* stack) {
    free(stack);
}
bool isFull(Stack_t stack) {
    if (stack.top==stack.capacitiy){return true;}
    else {return false;}
}
bool isEmpty(Stack_t stack) {
    if (stack.top==0){return true;}
    else{return false;}
}
void push(Stack_t* stack, int item) {
    if (!isFull(*stack)) {
        stack->top++;
        stack->elements[stack->top]=item;
    }
    else printf("A %d nem fer be!\n", item);
}
int pop(Stack_t* stack) {
    if (!isEmpty(*stack)) {
        stack->elements[stack->top--]=-1;
        return 0;
    }
    else {
        printf("A verem ures!");
        return -2;
    }
}
int peek(Stack_t stack) {
    if (!isEmpty(stack)) {
        return stack.elements[stack.top];
    }
    else {
        printf("A verem ures!");
        return -1;
}
    }
int size(Stack_t stack) {
    return stack.top;
}