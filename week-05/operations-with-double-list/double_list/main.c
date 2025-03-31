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

    Node *head = NULL;
    Node *node1, *node2, *node3, *node4, *node5;
    insertAtEnd(&node1,1);
    insertAtEnd(&node2,2);
    insertAtEnd(&node3,3);
    insertAtBeginning(&node4,4);
    insertAfter(node2,5);
    isEmpty(head) ? printf("A lista ures!!\n") : printf("A lista nem ures!\n");
    printListFromBegin(head);
    printListFromEnd(node3);
}