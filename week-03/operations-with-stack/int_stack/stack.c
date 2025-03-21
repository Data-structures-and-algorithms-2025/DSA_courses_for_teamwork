//
// Created by oszti on 3/16/2025.
//

#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

void createStack(int capacity, Stack_t * stack)
{
    stack->capacity = capacity;
    stack->top = -1;

    stack->elements =(int*)malloc(capacity*sizeof(int));
    if (!stack->elements)
    {
        printf("Memory allocation failed!");
        exit(404);
    }
   }

void destroyStack(Stack_t* stack)
{
    free(stack->elements);
}

bool isFull(Stack_t stack)
{
    if(stack.capacity-1 == stack.top)
    {
        return true;
    }
    return false;
}
bool isEmpty(Stack_t stack)
{
    if(stack.top == -1)
    {
        return true;
    }
    return false;
}

void push(Stack_t* stack, int item)
{
    if (isFull(*stack)) {
        printf("It's full!\n");
        return;
    }
    stack->elements[++stack->top] = item;
}
int pop(Stack_t* stack)
{
    if(!isEmpty(*stack))
    {
        int value =stack->elements[stack->top];
        stack->top--;
        return value;
    }
    return -1;
}

int peek(Stack_t stack)
{
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
        return -1;
    }
    return stack.elements[stack.top];
}

int size(Stack_t stack)
{
    return stack.top+1;
}