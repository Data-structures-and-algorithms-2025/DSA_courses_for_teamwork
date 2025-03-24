//
// Created by oszti on 3/23/2025.
//

#include "simple_queue.h"


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