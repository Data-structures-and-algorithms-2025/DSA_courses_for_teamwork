//
// Created by oszti on 3/30/2025.
//

#include "simple_list_functions.h"
#include <stdlib.h>
#include<stdio.h>
Node *newNode(int new_data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if(!new_node) {
        exit(-1);
    }
    new_node->data = new_data;
    new_node->next = NULL;
    return new_node;
}
bool isEmpty(Node *head) {
    return head == NULL;
}
void insertAtBeginning(Node** head_ref, int new_data) {
    Node* new_node = newNode(new_data);
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
void insertAfter(Node* prev_node, int new_data) {
    if (prev_node == NULL) {
        return;
    }
    Node* new_node = newNode(new_data);
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}
void insertAtEnd(Node** head_ref, int new_data) {
    Node* new_node = newNode(new_data);
    Node* last = *head_ref;
    if (isEmpty(*head_ref)) {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL) last = last->next;
    last->next = new_node;
}
void printList(Node* node) {
    while (node != NULL) {
        printf("%4d ", node->data);
        node = node->next;
    }
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

void deleteNode(Node **head_ref, int key) {
    if(isEmpty(*head_ref))
    {
        printf("NULL_POINTER_EXCEPTION_ERROR_MESSAGE");
        return;
    }
    if((*head_ref)->data == key)
    {
        deleteFromBeginning(head_ref);
        return;
    }
    Node *temp = (*head_ref)->next;
    Node *prev = (*head_ref);
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if(temp != NULL)
    {
        prev->next = temp->next;
        free(temp);
    }
}

void deleteFromEnd(Node **head_ref) {
    if(isEmpty(*head_ref))
    {
        printf("NULL_POINTER_EXCEPTION_ERROR_MESSAGE");
        return;
    }
    if((*head_ref)->next == NULL)
    {
        free(*head_ref);
        *head_ref = NULL;
        return;
    }
    Node *temp = *head_ref;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}
bool searchNode(Node *head_ref, int key) {
    Node *temp = head_ref;
    while(temp != NULL)
    {
        if(temp->data == key) return true;
        temp = temp->next;
    }
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
