//
// Created by oszti on 3/30/2025.
//
#include <stdlib.h>
#include <stdio.h>
#include "simple_list_functions.h"

Node *newNode(int new_data) {
    Node *newItem = (Node*) malloc(sizeof (Node));
    if(!newItem)
    {
        printf("MEMORY_ALLOCATION_ERROR_MESSAGE");
        exit(-1);
    }
    newItem->data = new_data;
    newItem->next = NULL;
    return newItem;
}

bool isEmpty(Node *head) {
    return head == NULL;
}

void insertAtBeginning(Node **head_ref, int new_data) {
    Node* temp = newNode(new_data);
    if(isEmpty(*head_ref))
    {
        *head_ref = temp;
        return;
    }
    temp->next = *head_ref;
    *head_ref = temp;
}
void insertAfter(Node *prev_ref, int new_data) {
if(prev_ref == NULL)
{
printf("NULL_POINTER_EXCEPTION_ERROR_MESSAGE");
return;
}
    Node* new_node = newNode(new_data);
    if (prev_ref->next != NULL) {
        new_node->next = prev_ref->next;
    }
    prev_ref->next = new_node;
}
void insertAtEnd(Node **head_ref, int new_data) {
    if(isEmpty(*head_ref))
    {
        *head_ref = newNode(new_data);
        return;
    }
    Node *temp = *head_ref,*last;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    last=newNode(new_data);
    temp->next = last;
}

void printList(Node *head) {
    while (head != NULL) {
        printf("%d --> ", head->data);
        head=head->next;
    }
}
