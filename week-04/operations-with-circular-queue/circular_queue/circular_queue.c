//
// Created by oszti on 3/23/2025.
//

#include "circular_queue.h"

#include <stdio.h>
#include <stdlib.h>

void createQueue(int capacity, CircularQueue_t *queue) {
    queue->elements = (int*)calloc(capacity,sizeof(int));
    queue->capacity = capacity;
    queue->front=-1;
    queue->rear=-1;
}

void destroyQueue(CircularQueue_t* queue) {
    free(queue->elements);
}

bool isFull(CircularQueue_t queue) {
    if ((queue.rear-queue.front)==queue.capacity) {
        return true;
    }
    return false;
}

bool isEmpty(CircularQueue_t queue) {
    if (queue.front==-1 && queue.rear==-1) {
        return true;
    }
    return false;
}

void enqueue(CircularQueue_t* queue, int item) {
    if (isFull(*queue)) {
        printf("Queue is full\n");
    }
    else if (isEmpty(*queue)) {
        queue->front=0;
        queue->rear=0;
        queue->elements[queue->rear] = item;
    }
    else {
        queue->rear = (queue->rear + 1);
        queue->elements[queue->rear] = item;
    }

}

void dequeue(CircularQueue_t* queue) {
    if (isEmpty(*queue)) {
        printf("Queue is empty\n");
    }
    else {
        queue->rear=0;
        queue->rear=queue->rear-1;
    }
}

void display(CircularQueue_t queue) {
    for (int i = queue.front; i < queue.rear; i++) {
        printf("%d ", queue.elements[i]);
    }
}

int peek(CircularQueue_t queue) {
    return queue.elements[queue.rear];
}