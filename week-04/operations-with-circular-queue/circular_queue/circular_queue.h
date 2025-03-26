//
// Created by oszti on 3/23/2025.
//

#ifndef CIRCULAR_QUEUE_H
#define CIRCULAR_QUEUE_H

typedef struct {
    int capacity;
    int front;
    int rear;
    int *elements;
} CircularQueue_t;

void createQueue(int capacity, CircularQueue_t *queue);

void destroyQueue(CircularQueue_t *queue);

bool isFull(CircularQueue_t queue);

bool isEmpty(CircularQueue_t queue);

void enqueue(CircularQueue_t *queue, int item);

int dequeue(CircularQueue_t *queue);

void display(CircularQueue_t queue);

int peek(CircularQueue_t queue);
#endif //CIRCULAR_QUEUE_H
