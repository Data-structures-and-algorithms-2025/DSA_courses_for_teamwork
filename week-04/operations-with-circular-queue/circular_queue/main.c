#include <stdio.h>
#include <stdlib.h>
#include "circular_queue.h"

int main() {
    /*
 1.	Egy kezdetben üres, maximum 4 kapacitású körkörös sorba próbáljuk elhelyezni, ebben a sorrendben, a 1, 2, 3, 4 számokat.
 2.	Vegyünk ki két értéket, majd próbáljuk betenni, ebben a sorrendben, az 5, 6 és 7 számokat.
 3.	Utána vegyünk ki 1 értéket.
 4.	Melyik szám lesz a sor elején a leírt műveletek elvégzése után?
 5.	Mennyi lesz a sorban található elemek összege a leírt műveletek elvégzése után?
 Megjegyzes: A sort nem szabad bejárni, csak a megfelelő műveleteket használhatod!*/

    CircularQueue_t queue;
    createQueue(4, &queue);

    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);
    enqueue(&queue, 4);

    dequeue(&queue);
    dequeue(&queue);

    enqueue(&queue, 5);
    enqueue(&queue, 6);
    enqueue(&queue, 7); // Sikertelen, mert a sor tele van

    dequeue(&queue);

    printf("Front element: %d\n", peek(queue));

    int sum = 0;
    int i = queue.front;
    if (!isEmpty(queue)) {
        while (true) {
            sum += queue.elements[i];
            if (i == queue.rear)
                break;
            i = (i + 1) % queue.capacity;
        }
    }
    printf("Sum of elements: %d\n", sum);
    display(queue);
    destroyQueue(&queue);
    return 0;
}
