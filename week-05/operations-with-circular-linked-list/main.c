
#include "circular_linked_list.h"

int main() {
   Node *head=NULL;
 for(int i=1;i<=10;i++)
 {
     insertAtEnd(&head,i);
 }
    printf("Eredeti lista: ");
    printList(head);
    printf("\n");
    printf("Adott kulcsu csomopont torlese utan: ");
    deleteNode(&head,1);
    printList(head);
    return 0;
}
