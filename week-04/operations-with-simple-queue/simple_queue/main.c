#include <stdio.h>

#include "simple_queue.h"

int main(void)
{
  /*
1.	Egy kezdetben üres, maximum 5 kapacitású sorba próbáljuk elhelyezni, ebben a sorrendben, a 10, 20, 30, 40, 50 számokat.
2.	Vegyünk ki két értéket, majd próbáljuk betenni, ebben a sorrendben, a 60, 70 és 80 számokat.
3.	Utána vegyünk ki 1 értéket.
4.	Melyik szám lesz a sor elején a leírt műveletek elvégzése után?
5.  Mennyi lesz a sorban található elemek összege a leírt műveletek elvégzése után?
Megjegyzes: A sort nem szabad bejárni, csak a megfelelő műveleteket használhatod.*/
// 1.
  Simple_Queue_t queue;
  int capacity=5;
  createQueue(capacity, &queue);
  for (int i = 0; i < capacity; i++) {
      enqueue(&queue, (i+1)*10);
  }
  display(queue);
// 2.
  printf("dequeued: %d, %d\n", dequeue(&queue), dequeue(&queue));
  for (int i = 6; i < 8; i++) {
      enqueue(&queue, (i)*10);
  }
// 3.
  printf("dequeued: %d\n", dequeue(&queue));
// 4.
  printf("peek front: %d\n",peek(queue));
  display(queue);
// 5.
  int sum = 0;
  for (int i = 0; i < 2; i++) {
      sum=sum+dequeue(&queue);
  }
  printf("Sum is %d\n", sum);
  return 0;
}