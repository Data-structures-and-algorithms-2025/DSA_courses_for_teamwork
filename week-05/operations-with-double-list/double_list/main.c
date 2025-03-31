#include <stdio.h>
#include "double_list_functions.h"

int main(void)
{
    /*Írj egy programot, amely az alábbi lépéseket hajtja végre az egyszeresen láncolt listán:

Hozz létre egy üres listát.

Adj hozzá három elemet a lista végéhez a insertAtEnd függvény segítségével.

Adj hozzá egy elemet a lista elejére a insertAtBeginning függvénnyel.

Adj hozzá egy elemet egy adott elem után a insertAfter függvény használatával (például a második elem után).

Ellenőrizd, hogy a lista üres-e az isEmpty függvénnyel, és írd ki az eredményt.

Írd ki a lista elemeit mindkét irányból.*/

    Node *head = newNode(0);
    insertAtEnd(&head,1);
    insertAtEnd(&head,2);
    insertAtEnd(&head,3);
    insertAtBeginning(&head,4);
    insertAfter(head,5);
    isEmpty(head) ? printf("A lista ures!!\n") : printf("A lista nem ures!\n");
    printListFromBegin(head);
    printf("\n");
    printListFromEnd(head);
}