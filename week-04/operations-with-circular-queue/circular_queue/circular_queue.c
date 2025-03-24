//
// Created by oszti on 3/23/2025.
//

#include "circular_queue.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

void createQueue(int capacity, CircularQueue_t *queue) {
    queue->elements = (int*)malloc(capacity*sizeof(int));
    if (!queue->elements) {perror("Memory allocation error!"); exit(-1);}
    queue->front = queue->rear = -1;
}
void destroyQueue(CircularQueue_t *queue) {
    free(queue->elements);
}
bool isFull(CircularQueue_t queue){
  return queue.front == (queue.rear+1) % queue.capacity ? true : false;
 }
bool isEmpty(CircularQueue_t queue) {
    return queue.front == -1 ? true : false;
}
void enqueue(CircularQueue_t *queue, int item) {
    if (isFull(*queue)) { printf("It is full"); exit(-3); }
    if (isEmpty(*queue)) { queue->front=0;}
    queue->rear=(queue->rear+1)%queue->capacity;
    queue->elements[queue->rear]=item;
    queue->rear++;
}
int dequeue(CircularQueue_t *queue) {
    if (isEmpty(*queue)) { printf("is empty"); return INT_MIN; }
    int temp = queue->elements[queue->front];
    if (queue->front==queue->rear) { queue->front=queue->rear=-1; }
    else {
        queue->front=(queue->front+1)%queue->capacity;
    }
    return temp;
}
void display(CircularQueue_t queue) {
    if (isEmpty(queue)) { printf("is empty"); exit(-4); }
    if (queue.front==queue.rear)
        printf("%i ",queue.elements[queue.front]);
    else {
        int i=queue.front;
        do { printf("%i ",queue.elements[i]);
            i=(queue.front)%queue.capacity;
        }
        while (i!=queue.rear);
        printf("%i ",queue.elements[i]);
    }
    printf("\n");
}
int peek(CircularQueue_t queue) {
    return queue.elements[queue.front];
}

