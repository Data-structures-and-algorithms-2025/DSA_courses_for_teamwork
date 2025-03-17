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
    Stack_t stack;
    createStack(4, &stack);
    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);
    push(&stack, 4);
    push(&stack, 5);
    pop(&stack);
    printf("A verem tetejen a %d talalhato.\n", peek(stack));
    int  sum=0;
    while (!isEmpty(stack)) {
        sum+=peek(stack);
        pop(&stack);
    }
    printf("A veremben talalhato elemek osszege:%d", sum);
    destroyStack(&stack);
    return 0;
}
