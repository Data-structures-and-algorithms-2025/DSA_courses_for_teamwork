//
// Created by oszti on 3/23/2025.
//

#include "simple_queue.h"

#include <stdio.h>
#include <stdlib.h>
/**
 * Creates the queue data structure, allocates memory for elements
 * @param capacity
 * @param queue
 */
void createQueue(int capacity, Simple_Queue_t *queue) {
    queue->capacity=capacity;
    queue->elements=(int*)malloc(queue->capacity*sizeof(int));
    queue->front=-1;
    queue->rear=-1;
}
void destroyQueue(Simple_Queue_t* queue) {
    free(queue->elements);
    queue->capacity=0;
    queue->front=0;
    queue->rear=0;
    queue=NULL;
}

bool isFull(Simple_Queue_t queue) {
    return queue.front == (queue.rear+1)%queue.capacity;
}

bool isEmpty(Simple_Queue_t queue) {
    return queue.front==-1;
}

void enqueue(Simple_Queue_t* queue, int item) {
    if (isFull(*queue)==true) {
        printf("Hiba a vbeillesztesnel(TELE)\n");
        return;
    }
    if (isEmpty(*queue)==true) {queue->front=0;}
        queue->rear++;
        queue->elements[queue->rear]=item;

}

int dequeue(Simple_Queue_t* queue) {
    if (isEmpty(*queue)==true){exit(-1); }
    int temp=queue->front;
    if (queue->front==queue->rear) {
        queue->front=-1;
        queue->rear=-1;
    }
    queue->front++;
    return temp;

}

void display(Simple_Queue_t queue) {
    if (isEmpty(queue)==true){exit(-1);}
    for (int i=queue.front; i<=queue.rear; i++) {
        printf("%d ", queue.elements[i]);
    }
}

int peek(Simple_Queue_t queue) {
    return queue.elements[queue.front];
}