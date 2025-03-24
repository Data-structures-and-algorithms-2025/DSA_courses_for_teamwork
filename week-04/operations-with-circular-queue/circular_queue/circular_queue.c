//
// Created by oszti on 3/23/2025.
//

#include "circular_queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void createQueue(int capacity, CircularQueue_t *queue) {
    queue->capacity = capacity;
    queue->front = -1;
    queue->rear = -1;
    queue->elements = (int *)malloc(capacity * sizeof(int));
}

void destroyQueue(CircularQueue_t *queue) {
    free(queue->elements);
    queue->front = -1;
    queue->rear = -1;
}

bool isFull(CircularQueue_t queue) {
    return ((queue.rear + 1) % queue.capacity == queue.front);
}

bool isEmpty(CircularQueue_t queue) {
    return (queue.front == -1);
}

void enqueue(CircularQueue_t *queue, int item) {
    if (isFull(*queue)) {
        printf("Queue is full! Cannot enqueue %d.\n", item);
        return;
    }
    if (isEmpty(*queue)) {
        queue->front = queue->rear = 0;
    } else {
        queue->rear = (queue->rear + 1) % queue->capacity;
    }
    queue->elements[queue->rear] = item;
}

int dequeue(CircularQueue_t *queue) {
    if (isEmpty(*queue)) {
        printf("Queue is empty! Cannot dequeue.\n");
        return -1;
    }
    int item = queue->elements[queue->front];
    if (queue->front == queue->rear) {
        queue->front = queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % queue->capacity;
    }
    return item;
}

int peek(CircularQueue_t queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty!\n");
        return -1;
    }
    return queue.elements[queue.front];
}

int sumQueue(CircularQueue_t queue) {
    int sum = 0;
    if (isEmpty(queue)) return 0;
    int i = queue.front;
    do {
        sum += queue.elements[i];
        i = (i + 1) % queue.capacity;
    } while (i != (queue.rear + 1) % queue.capacity);
    return sum;
}

