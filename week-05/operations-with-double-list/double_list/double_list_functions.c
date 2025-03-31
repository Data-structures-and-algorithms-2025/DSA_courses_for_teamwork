//
// Created by oszti on 3/30/2025.
//

#include "double_list_functions.h"
#include<stdio.h>
#include<stdlib.h>

Node * newNode(int new_data) {
    Node* node = (Node*)malloc(sizeof(Node));
    if (!node) {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    node->data = new_data;
    node->next = NULL;
    node->prev = NULL;
    return node;
}

bool isEmpty(Node *head) {
    return head == NULL;
}

void insertAtBeginning(Node** head_ref, int new_data) {
    Node* node = newNode(new_data);
    node->next = *head_ref;
    if (*head_ref != NULL) {
        (*head_ref)->prev = node;
    }
    *head_ref = node;
}

void insertAfter(Node* prev_ref, int new_data) {
    if (prev_ref == NULL) {
        printf("Previous node cannot be NULL\n");
        return;
    }
    Node* node = newNode(new_data);
    node->next = prev_ref->next;
    node->prev = prev_ref;
    prev_ref->next = node;
    if (node->next != NULL) {
        node->next->prev = node;
    }
}

void insertAtEnd(Node** head_ref, int new_data) {
    Node* node = newNode(new_data);
    if (*head_ref == NULL) {
        *head_ref = node;
        return;
    }
    Node* temp = *head_ref;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = node;
    node->prev = temp;
}

void printListFromBegin(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void printListFromEnd(Node* node) {
    if (node == NULL) return;
    while (node->next != NULL) {
        node = node->next;
    }
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->prev;
    }
    printf("\n");
}
