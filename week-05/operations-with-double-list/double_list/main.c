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
    //1.
    Node *head=NULL;

    //2.
    int num1, num2, num3;
    printf("Add meg a szamokat(num1,num2,num3): ");
    scanf("%i%i%i",&num1,&num2,&num3);
    insertAtEnd(&head,num1);
    insertAtEnd(&head,num2);
    insertAtEnd(&head,num3);
    printListFromEnd(head);

    //3.
    int num4;
    printf("Add meg a szamot(num4): ");
    scanf("%i",&num4);
    insertAtBeginning(&head,num4);\
    printListFromBegin(head);


    //4.
    int num5;
    printf("Add meg a szamot(num5): ");
    scanf("%i",&num5);
    insertAfter(head->next,num5);
    printListFromBegin(head);

    //5.
    if (isEmpty(head)) {
        printf("A lista ures!\n");
    }else {
        printf("A liste nem ures!\n");
    }

}
