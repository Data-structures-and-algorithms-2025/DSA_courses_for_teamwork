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
    createStack(4,&stack);
    push(&stack,1);
    push(&stack,2);
    push(&stack,3);
    push(&stack,4);
    push(&stack,5);
    pop(&stack);
    pop(&stack);
    push(&stack,6);
    push(&stack,7);
    push(&stack,8);
    int stackSum=0;
    for (int i = 0; i < size(stack); ++i) {
        stackSum+=peek(stack);
        pop(&stack);
    }
    printf("A stack osszege : %d\n",stackSum);
    return 0;
}
