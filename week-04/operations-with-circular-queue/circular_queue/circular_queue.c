//
// Created by oszti on 3/23/2025.
//

#include "circular_queue.h"


bool isEmpty(CircularQueue_t queue)
{
    return queue.front==-1;
}

bool isFull(CircularQueue_t queue)
{
    return (queue.front-1==queue.rear || (queue.front==0 &&
   queue.rear==queue.capacity-1));
}