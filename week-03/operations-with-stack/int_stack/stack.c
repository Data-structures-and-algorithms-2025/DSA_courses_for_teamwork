//
// Created by oszti on 3/16/2025.
//

#include "stack.h"
#include <stdlib.h>

void createStack(int capacity, Stack_t * stack){
 stack=(Stack_t*)malloc(sizeof(Stack_t));
}

void destroyStack(Stack_t* stack) {
 free(stack);
}

bool isFull(Stack_t stack) {
 return(stack.top==stack.capacity);
}

bool isEmpty(Stack_t stack) {
 if (stack.top==0)
 return true;
 return false;
}

void push(Stack_t* stack, int item) {
 if ((*stack).top!=0) {
  (*stack).top+=1;
  (*stack).top*=item;
 }
}

int pop(Stack_t* stack) {
 (*stack).items[(*stack).top]=0;
 (*stack).top-=1;
}

int peek(Stack_t stack) {
 return stack.items[stack.top];
}

int size(Stack_t stack) {
 return stack.top;
}