//
// Created by oszti on 3/30/2025.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "simple_list_functions.h"

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* newNode(int new_data) {
    Node* node = (Node*)malloc(sizeof(Node));
    if (!node) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    node->data = new_data;
    node->next = NULL;
    return node;
}

bool isEmpty(Node *head) {
    return head == NULL;
}

void insertAtBeginning(Node** head_ref, int new_data) {
    Node* node = newNode(new_data);
    node->next = *head_ref;
    *head_ref = node;
}

void insertAfter(Node* prev_ref, int new_data) {
    if (prev_ref == NULL) {
        printf("The given previous node cannot be NULL\n");
        return;
    }
    Node* node = newNode(new_data);
    node->next = prev_ref->next;
    prev_ref->next = node;
}

void insertAtEnd(Node** head_ref, int new_data) {
    Node* node = newNode(new_data);
    if (*head_ref == NULL) {
        *head_ref = node;
        return;
    }
    Node* last = *head_ref;
    while (last->next != NULL)
        last = last->next;
    last->next = node;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
//