//
// Created by oszti on 3/30/2025.
//

#include <stdio.h>
#include <stdlib.h>
#include "double_list_functions.h"

Node* newNode(int new_data) {
    Node *new_node = (Node*) malloc(sizeof(Node));
    if (!new_node) {
        printf("MEMORY_ALLOCATION_ERROR_MESSAGE");
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
    Node* new_node = (Node*) malloc(sizeof(Node));
    if (!new_node) {
        printf("MEMORY_ALLOCATION_ERROR_MESSAGE");
        exit(-1);
    }

    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void insertAfter(Node* prev_ref, int new_data) {
    if (prev_ref == NULL) {
        printf("The given previous node cannot be NULL.\n");
        return;
    }

    Node* new_node = (Node*) malloc(sizeof(Node));
    if (!new_node) {
        printf("MEMORY_ALLOCATION_ERROR_MESSAGE");
        exit(-1);
    }

    new_node->data = new_data;
    new_node->next = prev_ref->next;
    prev_ref->next = new_node;
}

void insertAtEnd(Node** head_ref, int new_data) {
    Node* new_node = (Node*) malloc(sizeof(Node));
    if (!new_node) {
        printf("MEMORY_ALLOCATION_ERROR_MESSAGE");
        exit(-1);
    }

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    Node* temp = *head_ref;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = new_node;
}

void printListFromBegin(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void printListFromEnd(Node *node) {
    if (node == NULL) {
        return;
    }
    printListFromEnd(node->next);
    printf("%d -> ", node->data);
}