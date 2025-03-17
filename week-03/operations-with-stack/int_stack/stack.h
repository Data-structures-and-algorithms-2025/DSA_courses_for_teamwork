//
// Created by oszti on 3/16/2025.
//

#ifndef STACK_H
#define STACK_H
/*Implementáld a veremmel kapcsolatos alapvető műveleteket: create, destroy, push, pop, peek, isFull, isEmpty. Ezeket a műveleteket az stack.h, stack.c és main.c fájlok segítségével valósítsd meg.
Definiálj egy Stack címkéjű struktúrát, amely egy egész számokat tartalmazó verem információit tárolja a következő mezők révén:
•	capacity/kapacitás (az elemek maximális száma)
•	top (a verem teteje – a legfelső elem pozíciója)
•	items/elemek (egész számokat tartalmazó tömb)
Adottak a következő stack.h fájlban megadott függvény deklarációk. Implementáld a függvényeket az stack.c fájlban.*/
/**
 * Initializing the capacity and size of stack,
 * allocating memory for the @elements array
 * @param capacity
 * @param stack
 */

typedef struct Stack {
    int capacity;
    int top;
    int *items;
}Stack_t;

void createStack(int capacity, Stack_t * stack);
/**
 * Deallocates the memory
 * @param stack
 */
void destroyStack(Stack_t* stack);
/**
 * Checks whether the stack is full
 * @param stack
 * @return
 */
bool isFull(Stack_t stack);
/**
 * Checks whether the stack is empty
 * @param stack
 * @return
 */
bool isEmpty(Stack_t stack);
/**
 * Pushes a new item to the stack,
 * if it is not full
 * @param stack
 * @param item
 */
void push(Stack_t* stack, int item);
/**
 * Removes the top element from the stack,
 * if it is not empty
 * @param stack
 * @return
 */
int pop(Stack_t* stack);
/**
 * Returns the top element of the stack,
 * if it is not empty
 * @param stack
 * @return
 */
int peek(Stack_t stack);
/**
 * Returns the size of the stack
 * @param stack
 * @return
 */
int size(Stack_t stack);

#endif //STACK_H
