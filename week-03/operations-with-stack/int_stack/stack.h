//
// Created by oszti on 3/16/2025.
//
#include <stdbool.h>
#ifndef STACK_H
#define STACK_H
typedef struct {
    int capacity;
    int top;
    int* items;
}Stack_t;
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
void createStack(int capacity, Stack_t * stack);

void destroyStack(Stack_t* stack);

bool isFull(Stack_t stack);

bool isEmpty(Stack_t stack);

void push(Stack_t* stack, int item);

int pop(Stack_t* stack);

int peek(Stack_t stack);

int size(Stack_t stack);

#endif //STACK_H
