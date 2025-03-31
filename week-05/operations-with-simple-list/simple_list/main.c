#include <stdio.h>
#include "simple_list_functions.h"

int main(void)
{
    int data=5;
    //Hozz létre egy üres listát.
    int *d = newNode(data);
    // hozzá három elemet a lista végéhez a insertAtEnd függvény segítségével.
    insertAtEnd(&d, data);
    //Adj hozzá egy elemet a lista elejére a insertAtBeginning függvénnyel.

    //Adj hozzá egy elemet egy adott elem után a insertAfter függvény használatával (például a második elem után).

    //Ellenőrizd, hogy a lista üres-e az isEmpty függvénnyel, és írd ki az eredményt.

    //Írd ki a lista elemeit a printList függvénnyel.
    
    return 0;
}