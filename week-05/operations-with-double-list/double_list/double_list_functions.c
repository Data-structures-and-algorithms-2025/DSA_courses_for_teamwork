//
// Created by oszti on 3/30/2025.
//

#include "double_list_functions.h"

#include <stdio.h>
#include <stdlib.h>

void insertAtBeginning(Node** head_ref, int new_data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = new_data;
    new_node->prev = NULL;
    new_node->next = *head_ref;

    if (*head_ref != NULL) {
        (*head_ref)->prev = new_node;
    }

    *head_ref = new_node;
}

void insertAfter(Node* prev_ref, int new_data) {
    if (prev_ref == NULL) {
        printf("Az elozo csomopont nem lehet NULL.\n");
        return;
    }

    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = new_data;
    new_node->next = prev_ref->next;
    new_node->prev = prev_ref;

    if (prev_ref->next != NULL) {
        prev_ref->next->prev = new_node;
    }

    prev_ref->next = new_node;
}

void insertAtEnd(Node** head_ref, int new_data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    Node* last = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }

    last->next = new_node;
    new_node->prev = last;
}

void printListFromBegin(Node* head) {
    Node* temp = head;
    printf("Lista elejetol: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void printListFromEnd(Node* node) {
    if (node == NULL) {
        printf("Lista ures.\n");
        return;
    }

    while (node->next != NULL) {
        node = node->next;
    }

    printf("Lista vegedtol: ");
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->prev;
    }
    printf("\n");
}