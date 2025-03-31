#include <stdio.h>
#include <stdlib.h>
#include "simple_list_functions.h"

#define MEMORY_ALLOCATION_ERROR_MESSAGE="Memory allocation error";
#define MEMORY_ALLOCATION_ERROR_CODE="-8";

int main(void)
{
    /*Írj egy programot, amely az alábbi lépéseket hajtja végre az egyszeresen láncolt listán:

    Hozz létre egy üres listát.

    Adj hozzá három elemet a lista végéhez a insertAtEnd függvény segítségével.

    Adj hozzá egy elemet a lista elejére a insertAtBeginning függvénnyel.

    Adj hozzá egy elemet egy adott elem után a insertAfter függvény használatával (például a második elem után).

    Ellenőrizd, hogy a lista üres-e az isEmpty függvénnyel, és írd ki az eredményt.

    Írd ki a lista elemeit a printList függvénnyel.*/


    int number1=1, number2=2;
    Node *head1 = NULL;
    head1= newNode(number1);
    insertAtEnd(&head1,number2);
    printList(head1);

    number1=3;
    number2=4;
    Node *head2 = NULL;
    head2= newNode(number1);
    insertAtBeginning(&head2,number2);
    printList(head2);




    return 0;
}