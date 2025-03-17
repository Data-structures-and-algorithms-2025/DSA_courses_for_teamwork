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

    Stack_t stack1;
    createStack(4,&stack1);
    push(&stack1,1); push(&stack1,2); push(&stack1,3); push(&stack1,4); push(&stack1,5);
    pop(&stack1); pop(&stack1);
    push(&stack1,6); push(&stack1,7); push(&stack1,8);
    pop(&stack1);

    printf("A stack tetejen levo elem: %d\n",peek(stack1));

    int sum=0;
    while(isFull(stack1)==true){
        sum=sum+peek(stack1);
        pop(stack1);
    }
    printf("A stack elemeinek osszege: %d\n",sum);

    destroyStack(&stack1);
    return 0;
}
