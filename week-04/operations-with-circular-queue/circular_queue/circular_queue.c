//
// Created by oszti on 3/23/2025.
//

#include "circular_queue.h"



void createQueue(int capacity, CircularQueue_t *queue) {
    queue->capacity = capacity;
    queue->front = -1;
    queue->rear = -1;
    queue->elements = (int *)malloc(sizeof(int) * capacity);

    if (queue->elements == NULL) {
        printf("hiba!\n");
        exit(-1);
    }
}


void destroyQueue(CircularQueue_t* queue)
{
    if (queue->elements != NULL) {
        free(queue->elements);
        queue->elements = NULL;
    }
}

bool isFull(CircularQueue_t queue)
{
    return ((queue.front == (queue.rear + 1) % queue.capacity));
}
bool isEmpty(CircularQueue_t queue)
{
    return (queue.front == -1);
}


void enqueue(CircularQueue_t* queue, int item)
{
    if (isFull(*queue)) {
        printf("Tele van!\n");
        return;
    }

    if (isEmpty(*queue)) {
        queue->front = 0;
        queue->rear = 0;
    } else {
        queue->rear = (queue->rear + 1) % queue->capacity;
    }

    queue->elements[queue->rear] = item;
}

int dequeue(CircularQueue_t* queue) {
    if (isEmpty(*queue)) {
        printf("Ures!\n");
        return -1;
    }

    int item = queue->elements[queue->front];

    if (queue->front == queue->rear) {
        queue->front = -1;
        queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % queue->capacity;
    }

    return item;
}

void display(CircularQueue_t queue) {
    if (isEmpty(queue)) {
        printf("Ures\n");
        return;
    }

    printf("Elemek: ");

    int i = queue.front;
    while (1) {
        printf("%d ", queue.elements[i]);

        if (i == queue.rear) {
            break;
        }

        i = (i + 1) % queue.capacity;
    }

    printf("\n");
}

int peek(CircularQueue_t queue) {
    if (isEmpty(queue)) {
        printf("Ures! \n");
        return -1;
    }

    return queue.elements[queue.front];
}
