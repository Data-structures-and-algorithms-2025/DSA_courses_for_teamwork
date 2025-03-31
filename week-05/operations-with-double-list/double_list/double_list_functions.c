//
// Created by oszti on 3/30/2025.
//

#include "double_list_functions.h"
Node* newNode(int new_data) {
    Node* node = (Node*)malloc(sizeof(Node));
    if (node == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
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
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    new_node->data = new_data;
    new_node->next = *head_ref;
    new_node->prev = NULL;

    if (*head_ref != NULL) {
        (*head_ref)->prev = new_node;
    }

    *head_ref = new_node;
}
void insertAfter(Node* prev_ref, int new_data) {
    if (prev_ref == NULL) {
        printf("Previous node cannot be NULL\n");
        return;
    }

    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

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
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }

    Node* temp = *head_ref;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = new_node;
    new_node->prev = temp;
}
void printListFromBegin(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void printListFromEnd(Node *node) {
    if (node == NULL) {
        printf("List is empty\n");
        return;
    }

    while (node->next != NULL) {
        node = node->next;
    }

    while (node != NULL) {
        printf("%d ", node->data);
        node = node->prev;
    }
    printf("\n");
}