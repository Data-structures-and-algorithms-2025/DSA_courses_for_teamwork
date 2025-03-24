//
// Created by oszti on 3/23/2025.
//

#include <malloc.h>
#include "circular_queue.h"

void createQueue(int capacity, CircularQueue_t *queue) {
    queue->capacity = capacity;
    queue->rear = -1;
    queue->front = -1;
    queue->elements = (int *) malloc(capacity * sizeof(int));
    if (queue->elements == NULL) {
        perror("Mermoy!");
        exit(EXIT_FAILURE);
    }
}

void destroyQueue(CircularQueue_t *queue) {
    free(queue->elements);
    free(queue);
    queue = NULL;
}

bool isFull(CircularQueue_t queue)
{
    return ((queue.rear + 1) % queue.capacity) == queue.front;
}
