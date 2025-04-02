#include <stdio.h>

#include "simple_list_functions.h"

int main(void)
{
    /*Írj egy programot, amely az alábbi lépéseket hajtja végre az egyszeresen láncolt listán:

    Hozz létre egy üres listát.

    Adj hozzá három elemet a lista végéhez a insertAtEnd függvény segítségével.

    Adj hozzá egy elemet a lista elejére a insertAtBeginning függvénnyel.

    Adj hozzá egy elemet egy adott elem után a insertAfter függvény használatával (például a második elem után).

    Ellenőrizd, hogy a lista üres-e az isEmpty függvénnyel, és írd ki az eredményt.

    Írd ki a lista elemeit a printList függvénnyel.*/


    Node* head = NULL;
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtBeginning(&head, 5);
    Node* second = head->next;
    insertAfter(second, 15);
    if (isEmpty(head)) {
        printf("The node is empty\n");
    }else {
        printf("The node is not empty\n");
    }
    printf("The elements of the node:\n");
    printList(head);
    printf("\n");
    return 0;
    
}
