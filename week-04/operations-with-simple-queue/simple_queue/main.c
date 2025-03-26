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

    Simple_Queue_t queue1;
    createQueue(5,&queue1);
    enqueue(&queue1,10); enqueue(&queue1,20); enqueue(&queue1,30); enqueue(&queue1,40); enqueue(&queue1,50);
    dequeue(&queue1); dequeue(&queue1); enqueue(&queue1,60); enqueue(&queue1,70); enqueue(&queue1,80);
    dequeue(&queue1);
    int frontElement = peek(queue1);


    int sum=0;
    while (!isEmpty(queue1)) {
        sum += dequeue(&queue1);
    }
    printf("Sum: %d\n",sum);
    destroyQueue(&queue1);
    return 0;
}
