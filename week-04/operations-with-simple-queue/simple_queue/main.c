#include <stdio.h>
#define MAX_CAPACITY 5
int main(void)
{
    /*
1.	Egy kezdetben üres, maximum 5 kapacitású sorba próbáljuk elhelyezni, ebben a sorrendben, a 10, 20, 30, 40, 50 számokat.
2.	Vegyünk ki két értéket, majd próbáljuk betenni, ebben a sorrendben, a 60, 70 és 80 számokat.
3.	Utána vegyünk ki 1 értéket.
4.	Melyik szám lesz a sor elején a leírt műveletek elvégzése után?
5.  Mennyi lesz a sorban található elemek összege a leírt műveletek elvégzése után?
Megjegyzes: A sort nem szabad bejárni, csak a megfelelő műveleteket használhatod.*/

    int queue[MAX_CAPACITY];
    int front = 0, rear = -1;

    int numbers[] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        if (rear < MAX_CAPACITY - 1) {
            rear++;
            queue[rear] = numbers[i];
        } else {
            printf("A sor megtelt!\n");
        }
    }
    enqueue(60);
    enqueue(70);
    enqueue(80);  /

    dequeue();

    printf("A sor elején lévő szám: %d\n", queue[front]);

    int sum = calculate_sum();
    printf("A sorban található elemek összege: %d\n", sum);

    return 0;
}
