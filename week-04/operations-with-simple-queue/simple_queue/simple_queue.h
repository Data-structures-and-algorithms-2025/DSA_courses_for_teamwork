//
// Created by oszti on 3/23/2025.
//

#ifndef SIMPLE_QUEUE_H
#define SIMPLE_QUEUE_H
typedef struct {
    int capacity;
    int front;
    int rear;
    int *elements;
}Simple_Queue_t;

#include <stdbool.h>
/**
 * Creates the queue data structure, allocates memory for elements
 * @param capacity
 * @param queue
 */
void createQueue(int capacity, Simple_Queue_t *queue);
/**
 * Deallocates the elements array -> free
 * @param queue
 */
void destroyQueue(Simple_Queue_t* queue);
/**
 * Checks whether the queue is full or not
 * @param queue
 * @return true/false
 */
bool isFull(Simple_Queue_t queue);
/**
 * Checks whether the queue is empty or not
 * @param queue
 * @return true/false
 */
bool isEmpty(Simple_Queue_t queue);
/**
 * Adds a new item to the end of the queue
 * @param queue
 * @param item
 */
void enqueue(Simple_Queue_t* queue, int item);
/**
 * Removes the first item from the queue
 * @param queue
 * @return
 */
int dequeue(Simple_Queue_t* queue);
/**
 * Prints all items of the queue
 * @param queue
 */
void display(Simple_Queue_t queue);
/**
 * Returns the element in the front
 * @param queue
 * @return the element in the front
 */
int peek(Simple_Queue_t queue);

#endif //SIMPLE_QUEUE_H
