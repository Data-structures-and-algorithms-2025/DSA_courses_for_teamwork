//
// Created by oszti on 3/30/2025.
//

#include "double_list_functions.h"

#include <stdio.h>
#include <stdlib.h>

Node * newNode(int new_data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (!new_node) {
        printf("Memory allocation error");
        exit(-1);
    }
    new_node->data = new_data;
    new_node->next = NULL;
    return new_node;
}

bool isEmpty(Node *head) {
    return head == NULL;
}

void insertAtBeginning(Node **head_ref, int new_data) {
    Node* new_node = newNode(new_data);
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void insertAfter(Node *prev_ref, int new_data) {
    if (prev_ref == NULL) {
        printf("Null pointer exeption error");
    }
    Node* new_node = newNode(new_data);
    new_node->next = prev_ref->next;
    prev_ref->next = new_node;
}

void insertAtEnd(Node **head_ref, int new_data) {
    Node* new_node = newNode(new_data);
    Node* last = *head_ref;
    if (isEmpty(*head_ref)) {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
}

void printListFromBegin(Node *head) {
    Node* temp = head;
    while(temp != NULL)
    {
        printf("%i -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void printListFromEnd(Node *node) {
    Node* temp = node;
    while(temp->next != NULL) {
        temp=temp->next;
    }
    while(temp != NULL)
    {
        printf("%i -> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}
