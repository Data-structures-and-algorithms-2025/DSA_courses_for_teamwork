//
// Created by oszti on 3/23/2025.
//

#include <stdio.h>
#include <stdlib.h>
#include "circular_queue.h"

void createQueue(int capacity, CircularQueue_t *queue) {
    queue->capacity = capacity;
    queue->rear = queue->front - 1;
    queue->elements = (int *)malloc(capacity * sizeof(int));
    if (queue->elements == NULL) {
        printf("Memory allocation failed.\n");
        exit(-1);
    }
}
void destroyQueue(CircularQueue_t* queue) {
    free(queue->elements);
    queue->elements = NULL;
    queue->capacity = 0;
    queue->front = 0;
    queue->rear = 0;
}
bool isFull(CircularQueue_t queue) {
    return (queue.front-1 == queue.rear || (queue.front == 0 && queue.rear == queue.capacity - 1 ));
}
bool isEmpty(CircularQueue_t queue) {
    return queue.front == -1;
}
void enqueue(CircularQueue_t* queue, int item) {
    if (isFull(*queue)) {
        printf("Its full.\n");
        exit(-3);
    }
    if (isEmpty(*queue)) {
        queue->front = 0;
    }
    queue->rear = (queue->rear + 1)%queue->capacity;
    queue->elements[queue->rear] = item;
}
int dequeue(CircularQueue_t* queue) {
    if (isEmpty(*queue)) {
        printf("Its empty.\n");
        return INT_MIN;
    }
    int save = queue->elements[queue->front];
    if (queue->front == queue->rear) {
        queue->front = queue->rear - 1;
    }
    else {
        queue->front = (queue->front + 1) % queue->capacity;
    }
    return save;
}
void display(CircularQueue_t queue) {
    if (isEmpty(queue)) {
        printf("Its empty.\n");
        exit(-3);
    }
    if (queue.front == queue.rear) {
        printf("%d\n", queue.elements[queue.front]);
    }
    else {
        int i = queue.front;
        do {
            printf("%d ", queue.elements[i]);
            i = (i + 1)%queue.capacity;
        }
        while (i != queue.rear);
        printf("%d ", queue.elements[i]);
    }
    printf("\n");
}

int peek(CircularQueue_t queue) {
    return queue.elements[queue.front];
}