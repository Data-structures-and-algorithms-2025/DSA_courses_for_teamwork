
#include "../headers/constants.h"
#include <stdio.h>
#include <stdlib.h>
#include "../headers/node.h"

Node *newNode(HashItem new_data) {
    Node *newItem = (Node*) malloc(sizeof (Node));
    if(!newItem)
    {
        printf(MEMORY_ALLOCATION_ERROR_MESSAGE);
        exit(MEMORY_ALLOCATION_ERROR_CODE);
    }
    newItem->data = new_data;
    newItem->next = NULL;
    return newItem;
}

bool isEmpty(Node *head) {
    return head == NULL;
}


void printList(Node *node) {
    Node* temp = node;
    while(temp != NULL)
    {
        printItem(temp->data);
        temp = temp->next;
    }
}
void insertFirst(Node **head_ref, HashItem new_data) {
    Node* temp = newNode(new_data);
    if(isEmpty(*head_ref))
    {
        *head_ref = temp;
        return;
    }
    temp->next = *head_ref;
    *head_ref = temp;
}

void deleteFromBeginning(Node **head_ref) {
    if(isEmpty(*head_ref))
    {
        printf("NULL_POINTER_EXCEPTION_ERROR_MESSAGE");
        return;
    }
    Node *temp = *head_ref;
    *head_ref = (*head_ref)->next;
    free(temp);
}

void insertAfter(Node *prev_ref, HashItem new_data) {
    if(prev_ref == NULL)
    {
        printf("NULL_POINTER_EXCEPTION_ERROR_MESSAGE");
        return;
    }
    Node *newItem = newNode(new_data);
    newItem->next = prev_ref->next;
    prev_ref->next = newItem;
}


bool searchNode(Node *head_ref, int key) {
    Node *temp = head_ref;
    while(temp != NULL)
    {
        if(temp->data.key == key)  return true;
        temp = temp->next;
    }
    return false;
}

bool deleteNode(Node **head_ref, int key) {
    if(isEmpty(*head_ref))
    {
        printf("NULL_POINTER_EXCEPTION_ERROR_MESSAGE");
        return false;
    }
    if((*head_ref)->data.key==key)
    {
        deleteFromBeginning(head_ref);
        return true;
    }
    Node *temp = (*head_ref)->next;
    Node *prev = (*head_ref);
    while (temp != NULL && temp->data.key != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if(temp != NULL)
    {
        prev->next = temp->next;
        free(temp);
        return true;
    }
    else
        return false;
}

void freeList(Node **head) {
    while(*head != NULL)
    {
        Node *temp = *head;
        *head = (*head)->next;
        free(temp);
    }
    *head = NULL;
}

void printItem(HashItem item) {
    printf("\t\tkey: %i\t->\tvalue: %i\n", item.key, item.data);
}
