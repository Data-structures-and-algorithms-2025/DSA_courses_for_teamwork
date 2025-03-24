//
// Created by oszti on 3/23/2025.
//

#include "circular_queue.h"

#include <stdio.h>
#include <stdlib.h>

void createQueue(int capacity, CircularQueue_t* queue){
    queue->capacity=capacity;
    queue->rear=queue->front=-1;
    queue->elements=(int*)malloc(capacity*sizeof(int));
    if (!queue->elements)
    {
        printf("Memory allocation error");
        exit(-1);
    }
}

void destroyQueue(CircularQueue_t* queue) {
    free(queue->elements);
}

bool isFull(CircularQueue_t queue) {
    return (queue.front-1==queue.rear || (queue.front==0 && queue.rear==queue.capacity-1));
}

bool isEmpty(CircularQueue_t queue) {
    return queue.front==-1;
}

void display(CircularQueue_t queue){
    if (isEmpty(queue))
    {
        printf("is empty");
        exit(-4);
    }
    if (queue.front==queue.rear)
        printf("%i ",queue.elements[queue.front]);
    else
    {
        int i=queue.front;
        do
        {
            printf("%i ",queue.elements[i]);
            i=(i + 1)%queue.capacity;
        }
        while (i!=queue.rear);
        printf("%i ",queue.elements[i]);
    }
    printf("\n");
}

int peek(CircularQueue_t queue) {
    if (!isEmpty(queue)) {
        return queue.elements[queue.front];
    }else {
        printf("The circular queue is empty!\n");
        return -1;
    }
}



