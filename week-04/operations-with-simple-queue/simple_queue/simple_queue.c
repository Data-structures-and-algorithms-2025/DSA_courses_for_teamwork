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
        exit(-3);
    }
    if(isEmpty(*queue)) {
        queue->front = 0;
    }
    queue->elements[++queue->rear]=item;
}

int dequeue(Simple_Queue_t* queue) {  // eltavolitja az elso elemet az adatszerkezetbol
    if(isEmpty(*queue)) {
        printf("The queue is empty!\n");
        exit(-1);
    }
    int save = queue->elements[queue->front];
    if(queue->front == queue->rear) {
        queue->front = queue->rear = -1;
    }

    else {
        queue->front++;
    }
    return queue->elements[save];
}

void display(Simple_Queue_t queue) {  // sor elemeinek a kiirasa
    if (isEmpty(queue)) {
        printf("The queue is empty!\n");
        exit(-1);
    }
    printf("The cars’ plate number are the following:\n");
    for (int i = queue.front; i <= queue.rear; ++i) {
        printf("%i ", queue.elements[i]);
    }
}

int peek(Simple_Queue_t queue) {
    if(isEmpty(queue)) {
        printf("The queue is empty!\n");
        exit(-1);
    }
    
    return queue.elements[queue.front];
}


