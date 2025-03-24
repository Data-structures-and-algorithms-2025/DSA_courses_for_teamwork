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


    Simple_Queue_t queue;
    createQueue(5, &queue);
    enqueue(&queue,10 );
    enqueue(&queue, 20);
    enqueue(&queue, 30);
    enqueue(&queue, 40);
    enqueue(&queue, 50);
    dequeue(&queue);
    dequeue(&queue);
    enqueue(&queue, 60 );
    enqueue(&queue, 70);
    enqueue(&queue, 80);
    dequeue(&queue);
    printf("%d\n", peek(queue));
    int sum = 0;
    while(!isEmpty(queue)) {
        sum += dequeue(&queue);
    }
    printf("%d\n",sum);
    return 0;
}
