//
// Created by oszti on 3/16/2025.
//

#ifndef STACK_H
#define STACK_H
/*Implementáld a veremmel kapcsolatos alapvető műveleteket: create, destroy, push, pop, peek, isFull, isEmpty. Ezeket a műveleteket az stack.h, stack.c és main.c fájlok segítségével valósítsd meg.
Definiálj egy Stack címkéjű struktúrát, amely egy egész számokat tartalmazó verem információit tárolja a következő mezők révén:
•	capacity/kapacitás (az elemek maximális száma)
•	top (a verem teteje – a legfelső elem pozíciója)
•	items/elemek (egész számokat tartalmazó tömb)*/

typedef struct{
    int capacity;
    int top;
    int *items;
  }STACK;

/*Adottak a következő stack.h fájlban megadott függvény deklarációk. Implementáld a függvényeket az stack.c fájlban.*/
/**
 * Initializing the capacity and size of stack,
 * allocating memory for the @elements array
 * @param capacity
 * @param stack
 */
void createStack(int capacity, STACK * stack);
/**
 * Deallocates the memory
 * @param stack
 */
void destroyStack(STACK* stack);
/**
 * Checks whether the stack is full
 * @param stack
 * @return
 */
bool isFull(STACK stack);
/**
 * Checks whether the stack is empty
 * @param stack
 * @return
 */
bool isEmpty(STACK stack);
/**
 * Pushes a new item to the stack,
 * if it is not full
 * @param stack
 * @param item
 */
void push(STACK* stack, int item);
/**
 * Removes the top element from the stack,
 * if it is not empty
 * @param stack
 * @return top
 */
int pop(STACK* stack);
/**
 * Returns the top element of the stack,
 * if it is not empty
 * @param stack
 * @return
 */
int peek(STACK stack);
/**
 * Returns the size of the stack
 * @param stack
 * @return
 */
int size(STACK stack);

#endif //STACK_H
