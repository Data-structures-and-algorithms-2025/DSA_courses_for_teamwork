#include <stdio.h>

#include "int_stack/stack.h"

int main(void) {
    /*Egy kezdetben üres, maximum 4 kapacitású verembe próbáljuk elhelyezni, ebben a sorrendben, az 1,2,3,4,5 számokat.
    a) Vegyünk ki két értéket, majd próbáljuk betenni, ebben a sorrendben a 6,7 és 8 számokat.
    b) Utána vegyünk ki 1 értéket.
    c) Melyik szám lesz a verem tetején a leírt műveletek elvégzése után?
    d) Mennyi lesz a veremben található elemek összege a leírt műveletek elvégzése után?*/
    //A vermet nem szabad bejárni!!!
    //A main-ben ne hivatkozz a struktúra mezőire!!!
    Stack_t stack;
    stack.capacity=4;
    createStack(stack.capacity,&stack);
    for (int i=0; i<=stack.capacity; ++i) {
        push(&stack,i+1);
    }
    printf("\nTorolt ertek: %d\n",stack.elements[stack.top]);
    pop(&stack);
    printf("\nTorolt ertek: %d\n",stack.elements[stack.top]);
    pop(&stack);
    /// a) masodik fele
    push(&stack,6);
    push(&stack,7);
    push(&stack,8);
    /// b)
    pop(&stack);
    printf("\nc) A szam a verem tetejen: %d\n",peek(stack));
    /// d) A veremben talalhato elemek osszege
    int x=stack.top, sum=0;
    for (int i=0;i<x;++i) {
        sum+=peek(stack);
        pop(&stack);
    }
    printf("\nA verem elemeinek osszege:%d\n",sum);
    return 0;
}
