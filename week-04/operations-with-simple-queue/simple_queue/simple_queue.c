//
// Created by oszti on 3/23/2025.
//

#include "simple_queue.h"
#include <stdio.h>
#include <stdlib.h>

void createQueue(int capacity, Simple_Queue_t* queue)
{
    queue->capacity=capacity;
    queue->rear=queue->front=-1;
    queue->elements=(int*)malloc(capacity*sizeof(int));
    if (!queue->elements)
    {
        printf("Memory allocation error");
        exit(-1);
    }
}

void destroyQueue(Simple_Queue_t* queue){
    free(queue->elements);
    queue->front = queue->rear = -1;  // igy ujra uress lesz az adatszerkezet
    queue->capacity = 0;
    queue = NULL;  // mem felszab

}

bool isFull(Simple_Queue_t queue){
 return queue.rear==queue.capacity - 1;
}

bool isEmpty(Simple_Queue_t queue)
{
 return queue.front==-1;
}

void enqueue(Simple_Queue_t *queue, int item) {
    if(isFull(*queue)) {
        printf("FULL_MESSAGE");
        return;
    }
    if(isEmpty(*queue)) {
        queue->front = 0;
    }
    queue->elements[++queue->rear]=item;
}


