//
// Created by oszti on 3/23/2025.
//

#include "circular_queue.h"

#include <stdlib.h>

void createQueue(int capacity, CircularQueue_t *queue) {
    queue->capacity=capacity;
    queue->rear=queue->front=-1;
    queue->elements=(int*)malloc(capacity*sizeof(int));
    if (!queue->elements)
    {
        printf("Memory allocation error");
        exit(-1);
    }
}
bool isFull(CircularQueue_t queue) {
        return queue.rear==queue.capacity;
}
bool isEmpty(CircularQueue_t queue) {
    return queue.front==queue.rear;
}
int dequeue(CircularQueue_t* queue) {
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
void display(CircularQueue_t queue)
{
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
            i=(i+1)%queue.capacity;
        }
        while (i!=queue.rear);
        printf("%i ",queue.elements[i]);
    }
    printf("\n");
}
void destroyQueue(CircularQueue_t* queue) {
    queue->front = -1;
    queue->rear = -1;
}
void enqueue(CircularQueue_t* queue, int item) {
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
int peek(CircularQueue_t queue) {
    if (isEmpty(queue)) {
        printf("The queue is empty\n");
        exit(-3);
    }
    return queue.elements[queue.front];

}