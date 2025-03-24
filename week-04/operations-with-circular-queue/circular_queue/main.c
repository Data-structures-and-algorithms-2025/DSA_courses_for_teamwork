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

    CircularQueue_t queue;

    createQueue(4, &queue); //letrehozzuk a sort

    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);
    enqueue(&queue, 4); //szamok behelyezese

    dequeue(&queue);
    dequeue(&queue); //ket ertek kivetele

    enqueue(&queue, 5);
    enqueue(&queue, 6);
    enqueue(&queue, 7); //3 ertek betetele

    dequeue(&queue); //egy ertek kivetele

    printf("%d",peek(queue)); //sor elejenek kiiratasa


    display(queue); //kiiratjuk a sort ellenorzes celjabol

    int temp = 0;
    for (int i = 0; i < queue.capacity; ++i) {
        temp += peek(queue);
        dequeue(&queue);
    }
    printf("a sorban levo elemek osszege: %d",temp);



    return 0;
}