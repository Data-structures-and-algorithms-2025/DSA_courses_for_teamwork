//
// Created by Dora on 2025. 03. 17..
//

#include "stack.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
void createStack(int capacity, Stack_t* stack){
  stack->capacity = capacity;
  stack->top = -1;
  stack->elements = (int *)malloc(stack->capacity* sizeof(int));
  if(!(stack->elements)){
    printf("error");
    exit(-1);
   }
}
void destroyStack(Stack_t* stack){
  stack->capacity=0;
  stack->top=-1;
  free(stack->elements);
  stack = NULL;
}
bool isFull(Stack_t stack){
    if(stack.top==stack.capacity){
      return true;
    }
    return false;
}
bool isEmpty(Stack_t stack){
   if (stack.top==0)
    {
        return true;
    }
    return false;
}
void push(Stack_t* stack, int item){
  if(isFull(*stack)){
    printf("A verem tele van");
  }
  stack->elements[++stack->top]=item;
}
int pop(Stack_t* stack){
  if(isEmpty(*stack)){
    printf("A verem ures");
    return -1;
  }
  return stack->elements[stack->top--];
}
int peek(Stack_t stack){
  if(isEmpty(stack)){
    printf("A verem ures");
    return -1;
  }
  return stack.elements[stack.top];
}
int size(Stack_t stack) {
    return stack.top + 1;
}