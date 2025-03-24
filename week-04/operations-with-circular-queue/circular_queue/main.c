#include <stdio.h>

#include "circular_queue.h"

int main(void)
{
    /*
 1.	Egy kezdetben üres, maximum 4 kapacitású körkörös sorba próbáljuk elhelyezni, ebben a sorrendben, a 1, 2, 3, 4 számokat.
 2.	Vegyünk ki két értéket, majd próbáljuk betenni, ebben a sorrendben, az 5, 6 és 7 számokat.
 3.	Utána vegyünk ki 1 értéket.
 4.	Melyik szám lesz a sor elején a leírt műveletek elvégzése után?
 5.	Mennyi lesz a sorban található elemek összege a leírt műveletek elvégzése után?
 Megjegyzes: A sort nem szabad bejárni, csak a megfelelő műveleteket használhatod!*/

    CircularQueue_t queue1;
    createQueue(4,&queue1);
    for (int i=1;i<5;i++) {
            if (isFull(queue1)==false) {
                enqueue(&queue1,i);
            }
    }
    dequeue(&queue1);
    dequeue(&queue1);
    enqueue(&queue1,5);
    enqueue(&queue1,6);
    enqueue(&queue1,7);
    dequeue(&queue1);
    //4 es ertek lesz asszem

display(queue1);
destroyQueue(&queue1);
    return 0;
}
