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

    for(int i = 0; i < 6; i++) {
        push(&stack, i);
    }
    pop(&stack);
    pop(&stack);
    push(&stack, 6);
    push(&stack, 7);
    push(&stack, 8);
    printf("%d is the last element\n",peek(stack));
    int s = 0;
    while ( !isEmpty(stack)) {
        s+= peek(stack);
        pop(&stack);
    }
    printf("The sum of the elements from the stack is: %i", s);
    destroyStack(&stack);
    return 0;
}
