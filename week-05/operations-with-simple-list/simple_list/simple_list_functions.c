//
// Created by oszti on 3/30/2025.
//
#include <stdlib.h>
#include <stdio.h>
#include "simple_list_functions.h"

Node* newNode(int new_data){
    Node* new_node = (Node*)malloc(sizeof(Node));
    if(!new_node) {
        printf("ERROR");
        exit(-1);
    }
    new_node->data = new_data;
    new_node->next = NULL;
    return new_node;
}

bool isEmpty(Node *head){
    if(head == NULL){return true;}
    return false;
}

void insertAtBeginning(Node** head_ref, int new_data){
    // Allocate memory to a node
    Node* new_node = newNode(new_data);
    new_node->next = (*head_ref);
    // Move head to new node
    (*head_ref) = new_node;
}

void insertAfter(Node* prev_node, int new_data) {
    if (prev_node == NULL) {
        printf("No Null");
        return;
        }
Node* new_node = newNode(new_data);
new_node->next = prev_node->next;
prev_node->next = new_node;
}

void insertAtEnd(Node** head_ref, int new_data){
    Node* new_node = newNode(new_data);
    Node* last = *head_ref;
    if (isEmpty(*head_ref)) {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL) last = last->next;
    last->next = new_node;
}

void printList(Node* *head_ref){
    if(isEmpty(*head_ref)) {
        printf("NULL_POINTER_EXCEPTION_ERROR_MESSAGE");
        return;
    }
    Node *temp = *head_ref;
    *head_ref = (*head_ref)->next;
    free(temp);
}