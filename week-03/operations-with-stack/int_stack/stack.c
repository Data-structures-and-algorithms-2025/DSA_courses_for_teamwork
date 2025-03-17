//
// Created by oszti on 3/16/2025.
//

#include <malloc.h>
#include <stdio.h>
#include "stack.h"

void createStack(int capacity, Stack_t * stack)
{
    stack->capacity=capacity;
    stack->top=-1;
    stack->elements=(int *) calloc(stack->capacity, sizeof(int));
    if(!stack->elements)
    {
        perror("Memory!");
        exit(EXIT_FAILURE);
    }
}
void destroyStack(Stack_t* stack)
{
    if (stack->elements)
    {
        free(stack->elements);
        stack->elements = NULL;
    }
    stack->capacity=0;
    stack->top=-1;

}
bool isFull(Stack_t stack)
{
    return stack.top== stack.capacity-1;
}
bool isEmpty(Stack_t stack)
{
    return stack.top==-1;
}
void push(Stack_t* stack, int item)
{
    if(isFull(*stack)){
        printf("FULL_MESSAGE");
        return;
    }
    stack->elements[++stack->top ] = item;
}
int pop(Stack_t* stack)
{
    if(isEmpty(*stack))
    {
        printf("FULL_MESSAGE");
        return INT_MIN;
    }
    int save= stack->elements[stack->top];
    stack->elements[stack->top--]=0;
    return save;
}
int peek(Stack_t stack)
{
    if(isEmpty(stack))
    {
        printf("FULL_MESSAGE");
        return INT_MIN;
    }
    return stack.elements[stack.top];
}
int size(Stack_t stack)
{
    return stack.top+1;
}



