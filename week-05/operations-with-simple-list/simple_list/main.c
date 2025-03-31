#include <stdio.h>
#include "C:\Githubdesktop\DSA_courses_for_teamwork\week-05\operations-with-simple-list\simple_list\simple_list_functions.h"
int main(void)
{
    Node* head = NULL;
    insertAtEnd(&head, 10);
    insertAtBeginning(&head, 5);
    insertAfter(head, 7);
    printList(head);
    return 0;
}

