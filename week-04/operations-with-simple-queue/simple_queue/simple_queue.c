//
// Created by oszti on 3/23/2025.
//
#include "simple_queue.h"
#include <stdlib.h>
#include <stdio.h>
void createQueue(int capacity, Simple_Queue_t *queue){
         queue->capacity=capacity;
         queue->rear=queue->front=-1;
         queue->elements=(int*)malloc(capacity*sizeof(int));
         if (!queue->elements)
         {
         printf("Memory allocation error");
         exit(-1);
         }
}
bool isFull(Simple_Queue_t queue) {
    return queue.rear == queue.front -1;
}

bool isEmpty(Simple_Queue_t queue) {
    if(queue.front == queue.rear - 1 || queue.front > queue.rear) return true;
    return false;
}

void enqueue(Simple_Queue_t *queue, int item) {
    if(isFull(*queue)) {
        printf("Queue is full!\n");
        return;
    }
    if(isEmpty(*queue)) {
        queue->front = 0;
    }
    queue->elements[++queue->rear] = item;
}

int dequeue(Simple_Queue_t *queue) {
    if(isEmpty(*queue)) {
        printf("Queue is empty!\n");
        return -7;
    }
    int item = queue->elements[queue->front++];
    if(queue->front > queue->rear) {
        queue->front = queue->rear = -1;
    }
    return item;
}

void display(Simple_Queue_t queue) {
    if(isEmpty(queue)) {
        printf("The queue is empty!\n");
        return;
    }
    printf("Queue elements: ");
    for(int i = queue.front; i <= queue.rear; i++) {
        printf("%d ", queue.elements[i]);
    }
    printf("\n");
}

int peek(Simple_Queue_t queue) {
    if(isEmpty(queue)) {
        printf("Queue is empty!\n");
        return -1;
    }
    return queue.elements[queue.front];
}

void destroyQueue(Simple_Queue_t *queue) {
    free(queue->elements);
    queue->elements == NULL;
    queue->capacity = 0;
    queue->front = queue->rear = -1;
}

