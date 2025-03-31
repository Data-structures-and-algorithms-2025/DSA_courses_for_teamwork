#include "double_list_functions.h"

#include <stdio.h>
#include <stdlib.h>

Node* newNode(int new_data) {
    Node* node = (Node*)malloc(sizeof(Node));
    if (!node) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    node->data = new_data;
    node->next = node->prev = NULL;
    return node;
}

bool isEmpty(Node *head) {
    return head == NULL;
}

void insertAtBeginning(Node** head_ref, int new_data) {
    Node* node = newNode(new_data);
    if (!node) {
      return;
    }
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
    if (!node){
      return;
    }
    node->next = prev_ref->next;
    node->prev = prev_ref;
    if (prev_ref->next != NULL) {
        prev_ref->next->prev = node;
    }
    prev_ref->next = node;
}

void insertAtEnd(Node** head_ref, int new_data) {
    Node* node = newNode(new_data);
    if (!node) return;
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
    printf("List from beginning: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void printListFromEnd(Node *node) {
    if (node == NULL) return;
    while (node->next != NULL) {
        node = node->next;
    }
    printf("List from end: ");
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->prev;
    }
    printf("\n");
}