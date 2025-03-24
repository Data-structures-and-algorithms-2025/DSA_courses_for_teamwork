//
// Created by oszti on 3/23/2025.
//

#include "circular_queue.h"

void createQueue(int capacity, CircularQueue_t* queue){
      
}
void destroyQueue(CircularQueue_t* queue){

}
bool isFull(CircularQueue_t queue)
{
    return (queue.front-1==queue.rear || (queue.front==0 &&
   queue.rear==queue.capacity-1));
}
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
 queue->elements[]=item;
}
int dequeue(CircularQueue_t* queue)
{
 if (isEmpty(*queue))
 {
 printf("is empty");
 return INT_MIN;
 }int save=queue->elements[queue->front];
 if (queue->front==queue->rear)
 {
 queue->front=queue->rear=-1;
 }
 else
 {
 queue->front=(queue->front+1)%queue->capacity;
 }
 return …;
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
 i=(…)%queue.capacity;
 }
 while (i!=queue.rear);
 printf("%i ",queue.elements[i]);
 }
 printf("\n");
}
int peek(CircularQueue_t queue)
