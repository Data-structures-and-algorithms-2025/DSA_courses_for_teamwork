//
// Created by oszti on 3/30/2025.
//

#include "simple_list_functions.h"

#include <stdio.h>
#include <stdlib.h>

Node *newNode(int new_data) {
    Node* new_node = (Node*) malloc (sizeof(Node));
    if(!new_node) {
        printf("Nem sikerult lefoglalni a memoriat!\n");
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
    new_node -> next = (*head_ref);

    (*head_ref) = new_node;
}

void insertAfter(Node* prev_ref, int new_data) {
    if(prev_ref == NULL) {
        printf("Null Pointer Exception Error");
        exit(-2);
    }

    Node* new_node = newNode(new_data);
    new_node -> next = prev_ref -> next;
    prev_ref -> next = new_node;
}

void insertAtEnd(Node** head_ref, int new_data) {
    Node* new_node = newNode(new_data);
    Node* last = (*head_ref);
    if(isEmpty(*head_ref)) {
        *head_ref = new_node;
        exit(-2);
    }
    while(last->next != NULL) {
        last = last->next;
        last->next = new_node;
    }
}

void printList(Node* node) {
    while(node != NULL) {
        printf("%4d ", node->data);
        node = node->next;
    }
}