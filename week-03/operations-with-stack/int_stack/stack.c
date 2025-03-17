//
// Created by oszti on 3/16/2025.
//

#include "stack.h"
#include <stdlib.h>

void createStack(int capacity, Stack_t * stack){
      stack=(Stack_t *)malloc(capacity*sizeof(Stack_t));
}
void destroyStack(Stack_t* stack){
    free(stack);
}
bool isFull(Stack_t stack){
     if(size==stack.capacity-1){
         return true;
     }
     else return false;
}
bool isEmpty(Stack_t stack){
      if(size==0){
        return true;
      }
      else return false;
}
void push(Stack_t* stack, int item){
    if(isFull){
        stack->capacity++;
        stack->elements[0]=item;
    }
}
int pop(Stack_t* stack){
     if(isEmpty){
       *stack->elements
     }
}
int peek(Stack_t stack) {

}
