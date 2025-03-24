//
// Created by oszti on 3/23/2025.
//

#include "circular_queue.h"

bool isEmpty(CircularQueue_t queue)
{
    return queue.front==-1;
}
void enqueue(CircularQueue_t* queue, int item)
{
    if (isFull(*queue))
    {
        printf("It is full");
        exit(-3);
    }
    if (isEmpty(*queue))
    {
        queue->front=0;
    }
    queue->rear=(queue->rear+1)%queue->capacity;
    queue->elements[queue->rear]=item;
}