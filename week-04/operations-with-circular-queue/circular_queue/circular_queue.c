//
// Created by oszti on 3/23/2025.
//

#include "circular_queue.h"

#include <stdio.h>
#include <stdlib.h>
void createQueue(int capacity, CircularQueue_t *queue) {

}

bool isFull(CircularQueue_t queue){
 return (queue.front-1==queue.rear || (queue.front==0 &&
queue.rear==queue.capacity-1));
}


bool isEmpty(CircularQueue_t queue){
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
int dequeue(CircularQueue_t* queue){
 if (isEmpty(*queue)){
  printf("is empty");
  return INT_MIN;
 }
 int save=queue->elements[queue->front];
 if (queue->front==queue->rear){
 queue->front=queue->rear=-1;
 }
 else{
 queue->front=(queue->front+1)%queue->capacity;
 }
 return save;
}

