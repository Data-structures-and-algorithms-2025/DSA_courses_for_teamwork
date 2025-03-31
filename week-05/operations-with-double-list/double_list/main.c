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

    Node *lista=NULL;

    insertAtEnd(&lista,3);
    insertAtEnd(&lista,5);
    insertAtEnd(&lista,8);
    insertAtBeginning(&lista,23);

    if (isEmpty(lista))
    {
        printf("Ures a lista \n");
    }else
    {
        printf("Nem uras a lista \n");
    }

    Node* temp = lista;
    int count = 0;
    while(temp != NULL && count <1)
    {
        temp = temp->next;
        count++;
    }

    if(temp!=NULL)
    {
        insertAfter(temp,10);
    }

    printListFromBegin(lista);
    printListFromEnd(lista);
}