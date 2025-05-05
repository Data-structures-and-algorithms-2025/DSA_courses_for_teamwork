#include <stdio.h>
#include "simple_list_functions.h"

int main(void)
{
    int number1 = 1, number2 = 2;
    Node *head1 = NULL;
    for (int i = 1; i <= 10; i++) { insertAtEnd(&head1, i); }
    printf("Eredeti lista");
    printList(head1);
    printf("\n");
    deleteFromBeginning(&head1);
    printf("Elso csomopont torlese utan");
    printList(head1);
    printf("\n");
    deleteFromEnd(&head1);
    printf("Utolso csomopont torlese utan");
    printList(head1);
    printf("\n");
    deleteFromEnd(&head1);
    printf("Adott kulcsu csomopont torlese");
    deleteNode(&head1,6);
    printList(head1);
    freeList(&head1);
    return 0;
}