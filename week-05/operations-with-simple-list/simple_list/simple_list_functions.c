//
// Created by oszti on 3/30/2025.
//

#include "simple_list_functions.h"

#include <stdio.h>
#include <stdlib.h>
#include "simple_list_functions.h"

Node* newNode(int new_data) {
    Node* node = (Node*)malloc(sizeof(Node));
    if (!node) {
        printf("sikertelen memoriafoglalas");
    }
    node->data = new_data;
    node->next = NULL;
    return node;
}

bool isEmpty(Node *head) {
    if(head==NULL) return true;
    return false;
}
void insertAtBeginning(Node** head_ref, int new_data) {
    Node* node = newNode(new_data);
    node->next = *head_ref;
    *head_ref = node;
}

void insertAfter(Node* prev_ref, int new_data) {
    if (prev_ref == NULL) {
        printf("nincs elozo pont");
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
    Node* temp = *head_ref;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = node;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d, ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
