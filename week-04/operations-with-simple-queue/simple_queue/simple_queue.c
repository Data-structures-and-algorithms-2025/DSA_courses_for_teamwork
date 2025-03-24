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
    queue->capacity = 0;
    queue->rear = 0;
    free(queue->elements);
}

bool isFull(Simple_Queue_t queue)
{
    return queue.rear == 0 && queue.front == queue.capacity - 1;
}

bool isEmpty(Simple_Queue_t queue)
{
    return queue.front == -1;
}

void enqueue(Simple_Queue_t* queue, int item)
{
    if (isFull(*queue))
    {
        printf("The stack is full");
        exit(-3);
    }
    if (isEmpty(*queue))
    {
        queue->rear = queue->front = 0;
    }
    else
    {
        queue->front = (queue->front + 1) % queue->capacity;
    }
    queue->elements[queue->front]=item;
}