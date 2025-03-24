//
// Created by oszti on 3/23/2025.
//

#include "simple_queue.h"
#include <stdlib.h>
#include <stdio.h>
void createQueue(int capacity, Simple_Queue_t* queue) {
    queue->capacity = capacity;
    queue->front = queue->rear = -1;
    queue->elements = (int*)malloc(capacity * sizeof(int));
    if (!queue->elements) {
        printf("Memory allocation error\n");
        exit(-1);
    }
}

void destroyQueue(Simple_Queue_t* queue) {
    free(queue->elements);
    queue->elements = NULL;
    queue->front = queue->rear = -1;
    queue->capacity = 0;
}

bool isFull(Simple_Queue_t queue) {
    return (queue.rear + 1) % queue.capacity == queue.front;
}

bool isEmpty(Simple_Queue_t queue) {
    return queue.front == -1;
}

void enqueue(Simple_Queue_t* queue, int item) {
    if (isFull(*queue)) {
        printf("The queue is full\n");
        return;
    }
    if (isEmpty(*queue)) {
        queue->front = queue->rear = 0;
    } else {
        queue->rear = (queue->rear + 1) % queue->capacity;
    }
    queue->elements[queue->rear] = item;
}

int dequeue(Simple_Queue_t* queue) {
    if (isEmpty(*queue)) {
        printf("The queue is empty\n");
        exit(-3);
    }
    int save = queue->elements[queue->front];
    if (queue->front == queue->rear) {
        queue->front = queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % queue->capacity;
    }
    return save;
}

void display(Simple_Queue_t queue) {
    if (isEmpty(queue)) {
        printf("The queue is empty\n");
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

int peek(Simple_Queue_t queue) {
    if (isEmpty(queue)) {
        printf("The queue is empty\n");
        exit(-3);
    }
    return queue.elements[queue.front];
}