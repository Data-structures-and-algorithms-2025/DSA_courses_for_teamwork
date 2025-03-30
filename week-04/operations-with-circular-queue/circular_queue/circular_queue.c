//
// Created by oszti on 3/23/2025.
//

#include "circular_queue.h"
#include <stdio.h>
#include <stdlib.h>

void createQueue(int capacity, CircularQueue_t *queue) {
    queue->capacity = capacity;
    queue->front = -1;
    queue->rear = -1;
    queue->elements = (int *)malloc(capacity * sizeof(int));
}

void destroyQueue(CircularQueue_t* queue) {
    free(queue->elements);
    queue->elements = NULL;
    queue->capacity = 0;
    queue->front = -1;
    queue->rear = -1;
}

bool isFull(CircularQueue_t queue) {
    return (queue.rear + 1) % queue.capacity == queue.front;
}

bool isEmpty(CircularQueue_t queue) {
    return queue.front == -1;
}

void enqueue(CircularQueue_t* queue, int item) {
    if (isFull(*queue)) {
        printf("Queue is full!\n");
        return;
    }
    if (isEmpty(*queue)) {
        queue->front = 0;
    }
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->elements[queue->rear] = item;
}

int dequeue(CircularQueue_t* queue) {
    if (isEmpty(*queue)) {
        printf("Queue is empty!\n");
        return -1;
    }
    int item = queue->elements[queue->front];
    if (queue->front == queue->rear) {
        queue->front = -1;
        queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % queue->capacity;
    }
    return item;
}

void display(CircularQueue_t queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty!\n");
        return;
    }
    int i = queue.front;
    printf("Queue elements: ");
    while (true) {
        printf("%d ", queue.elements[i]);
        if (i == queue.rear) break;
        i = (i + 1) % queue.capacity;
    }
    printf("\n");
}

int peek(CircularQueue_t queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty!\n");
        return -1;
    }
    return queue.elements[queue.front];
}