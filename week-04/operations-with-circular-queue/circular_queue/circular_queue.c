//
// Created by oszti on 3/23/2025.
//

#include "circular_queue.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

void createQueue(int capacity, CircularQueue_t *queue) {
    queue->capacity = capacity;
    queue->elements = (int*)malloc(capacity*sizeof(int));
    if (!queue->elements) {perror("Memory allocation error!"); exit(-1);}
    queue->front = queue->rear = -1;
}
void destroyQueue(CircularQueue_t *queue) {
    free(queue->elements);
    queue->elements = NULL;
    queue->capacity = 0;
    queue->front = queue->rear = -1;
}
bool isFull(CircularQueue_t queue){
    return (queue.front == (queue.rear + 1) % queue.capacity);
 }
bool isEmpty(CircularQueue_t queue) {
    return (queue.front == -1);
}
void enqueue(CircularQueue_t *queue, int item) {
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
int dequeue(CircularQueue_t *queue) {
    if (isEmpty(*queue)) {
        printf("Queue is empty!\n");
        return INT_MIN;
    }
    int temp = queue->elements[queue->front];
    if (queue->front == queue->rear) {
        queue->front = queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % queue->capacity;
    }
    return temp;
}
void display(CircularQueue_t queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty!\n");
        return;
    }
    int i = queue.front;
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
        return INT_MIN;
    }
    return queue.elements[queue.front];
}

