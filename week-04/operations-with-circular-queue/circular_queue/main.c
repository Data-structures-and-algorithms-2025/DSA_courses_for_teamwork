#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int capacity;
    int front;
    int rear;
    int *elements;
} CircularQueue_t;

void initQueue(CircularQueue_t *q, int capacity) {
    q->capacity = capacity;
    q->front = 0;
    q->rear = -1;
    q->elements = (int *)malloc(capacity * sizeof(int));
}

bool isFull(CircularQueue_t *q) {
    return ((q->rear + 1) % q->capacity) == q->front;
}

bool isEmpty(CircularQueue_t *q) {
    if (q->rear == -1) {
        return true;
    }
    return false;
}

bool enqueue(CircularQueue_t *q, int value) {
    if (isFull(q)) {
        return false;
    }
    if (isEmpty(q)) {
        q->front = 0;
    }
    q->rear = (q->rear + 1) % q->capacity;
    q->elements[q->rear] = value;
    return true;
}

bool dequeue(CircularQueue_t *q, int *removedValue) {
    if (isEmpty(q)) {
        return false;
    }
    *removedValue = q->elements[q->front];
    if (q->front == q->rear) {
        q->front = 0;
        q->rear = -1;
    } else {
        q->front = (q->front + 1) % q->capacity;
    }
    return true;
}

int frontValue(CircularQueue_t *q) {
    if (isEmpty(q)) {
        return -1;
    }
    return q->elements[q->front];
}

int sumQueue(CircularQueue_t *q) {
    if (isEmpty(q)) {
        return 0;
    }
    int sum = 0;
    int index = q->front;
    while (index != (q->rear + 1) % q->capacity) {
        sum += q->elements[index];
        index = (index + 1) % q->capacity;
    }
    return sum;
}

void freeQueue(CircularQueue_t *q) {
    free(q->elements);
}

int main() {
    CircularQueue_t queue;
    int capacity = 4;
    initQueue(&queue, capacity);

    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);
    enqueue(&queue, 4);

    int removed;
    dequeue(&queue, &removed);
    dequeue(&queue, &removed);

    enqueue(&queue, 5);
    enqueue(&queue, 6);
    enqueue(&queue, 7);

    dequeue(&queue, &removed);

    printf("A sor elejen levo elem: %d\n", frontValue(&queue));
    printf("A sor elemeinek osszege: %d\n", sumQueue(&queue));

    freeQueue(&queue);
    return 0;
}
