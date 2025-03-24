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
#define CAPACITY 4
    typedef struct {
        int elements[CAPACITY];
        int front;
        int rear;
    } CircularQueue_t;
    CircularQueue_t queue = {{0}, -1, -1};

    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);

    dequeue(&queue);
    dequeue(&queue);

    enqueue(&queue, 5);
    enqueue(&queue, 6);

    dequeue(&queue);

    printf("Front element: %d\n", queue.elements[queue.front]);

    int sum = 0;
    int i = queue.front;
    while (i != queue.rear) {
        sum += queue.elements[i];
        i = (i + 1) % CAPACITY;
    }
    sum += queue.elements[i];

    printf("Sum of elements: %d\n", sum);
    return 0;
}