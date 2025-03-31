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

    Node list;

    insertAtBeginning(&list,0);
    insertAtBeginning(&list,1);
    insertAtBeginning(&list,2);
    insertAtBeginning(&list,3);
    if(isEmpty(&list)) {
        printf("List is empty\n");
    }
    printList(&list);

    return 0;
}