#include <stdio.h>

#include "int_stack/stack.h"

int main(void)
{
    /*Egy kezdetben üres, maximum 4 kapacitású verembe próbáljuk elhelyezni, ebben a sorrendben, az 1,2,3,4,5 számokat.
    a) Vegyünk ki két értéket, majd próbáljuk betenni, ebben a sorrendben a 6,7 és 8 számokat.
    b) Utána vegyünk ki 1 értéket.
    c) Melyik szám lesz a verem tetején a leírt műveletek elvégzése után?
    d) Mennyi lesz a veremben található elemek összege a leírt műveletek elvégzése után?*/
    //A vermet nem szabad bejárni!!!
    //A main-ben ne hivatkozz a struktúra mezőire!!!

    Stack_t verem;
    createStack(4,&verem);
    for(int i=1;i<=5;i++)
    {
        push(&verem,i);
    }
    pop(&verem);
    pop(&verem);
    for(int i=6;i<=8;i++)
    {
        push(&verem,i);
    }
    pop(&verem);

    int top = peek(verem);
    printf("Felso elem a muveletek utan: %d \n",top);

    int sum =0;

    while(!isEmpty(verem))
    {
        sum += pop(&verem);
    }
    printf("A veremben talalhato elemek ossz: %d",sum);

    destroyStack(&verem);
    return 0;
}
