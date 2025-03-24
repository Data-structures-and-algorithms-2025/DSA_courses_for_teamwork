//
// Created by oszti on 3/23/2025.
//

#include "simple_queue.h"
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
    queue->elements = NULL;
    queue->front = queue->rear = -1;
    queue->capacity = 0;
}
bool isFull(Simple_Queue_t queue)
{
    return queue.rear==queue.capacity - 1;
}
bool isEmpty(Simple_Queue_t queue)
{
     return queue.front==-1;
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
        queue->front==0;
    }
    queue->elements[++queue->rear]=item;
}
int dequeue(Simple_Queue_t* queue)
{
    if (isEmpty(*queue))
    {
        printf("The queue is empty");
        exit(-3);
    }
    int save=queue->elements[queue->front];
    if (queue->front==queue->rear)
        queue->front=queue->rear=-1;
    else
        queue->front++;
    return save;
}
void display(Simple_Queue_t queue)
{
    if (isEmpty(queue))
    {
        printf("The queue is empty");
        exit(-3);
    }
    for (int i=queue.front;i<=queue.rear;i++)
    {
        printf("%i ",queue.elements[i]);
    }
    printf("\n");
}
int peek(Simple_Queue_t queue)
{    if (isEmpty(queue))
        {
            printf("The queue is empty");
            exit(-3);
        }
    return queue.elements[queue.front
}