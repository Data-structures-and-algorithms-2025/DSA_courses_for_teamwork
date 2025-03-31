//
// Created by oszti on 3/30/2025.
//

#include "double_list_functions.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int data;
    struct Node* next, *prev;
} Node;

Node* newNode(int new_data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    new_node->data = new_data;
    new_node->next = NULL;
    new_node->prev = NULL;
    return new_node;
}

bool isEmpty(Node *head) {
    return (head == NULL);
}

void insertAtBeginning(Node** head_ref, int new_data) {
    Node* new_node = newNode(new_data);
    if (*head_ref == NULL) {
        *head_ref = new_node;
    } else {
        new_node->next = *head_ref;
        (*head_ref)->prev = new_node;
        *head_ref = new_node;
    }
}

void insertAfter(Node* prev_ref, int new_data) {
    if (prev_ref == NULL) return;
    Node* new_node = newNode(new_data);
    new_node->next = prev_ref->next;
    prev_ref->next = new_node;
    new_node->prev = prev_ref;
    if (new_node->next != NULL) {
        new_node->next->prev = new_node;
    }
}

int main() {
    Node* head = NULL;
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAfter(head, 15);
    printf("%d -> %d -> %d\n", head->data, head->next->data, head->next->next->data);
    return 0;
}
