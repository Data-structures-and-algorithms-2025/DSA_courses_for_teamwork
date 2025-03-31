#include <stdio.h>
#include "double_list_functions.h"

int main(void) {
    /*Írj egy programot, amely az alábbi lépéseket hajtja végre az egyszeresen láncolt listán:

Hozz létre egy üres listát.

Adj hozzá három elemet a lista végéhez a insertAtEnd függvény segítségével.

Adj hozzá egy elemet a lista elejére a insertAtBeginning függvénnyel.

Adj hozzá egy elemet egy adott elem után a insertAfter függvény használatával (például a második elem után).

Ellenőrizd, hogy a lista üres-e az isEmpty függvénnyel, és írd ki az eredményt.

Írd ki a lista elemeit mindkét irányból.*/
    Node* head = NULL;
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtBeginning(&head, 5);
    Node* second = head->next->next;
    insertAfter(second, 25);
    if (isEmpty(head)) {
        printf("A lista üres.\n");
    } else {
        printf("A lista nem üres.\n");
    }
    printListFromBegin(head);
    printListFromEnd(head);

    return 0;
}