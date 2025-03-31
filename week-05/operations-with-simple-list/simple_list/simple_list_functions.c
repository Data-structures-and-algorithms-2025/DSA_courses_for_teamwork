//
// Created by oszti on 3/30/2025.
//
#include <stdlib.h>
#include <stdio.h>
#include "simple_list_functions.h"
#include "C:\Users\Lenovo\Documents\GitHub\DSA1\labs\lab_05\constants.h"

Node* newNode(int new_data){
    Node* node = (Node*)malloc(sizeof(Node));
    if (node == NULL) {
        printf("%s", MEMORY_ALLOCATION_ERROR_MESSAGE);
        return MEMORY_ALLOCATION_ERROR_CODE;
    }
    node->data = new_data;
    node->next = NULL;
    return node;
}

bool isEmpty(Node* head)
{
    return (head==NULL);
}

void insertAtBeginning(Node** head_ref, int new_data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("%s", MEMORY_ALLOCATION_ERROR_MESSAGE);
        return;
    }

    new_node->data = new_data;
    new_node->next = *head_ref;

    *head_ref = new_node;
}

void insertAfter(Node* prev_ref, int new_data) {
    if (prev_ref == NULL) {
        printf("The given previous node cannot be NULL\n");
        return;
    }

    // Allocate memory for the new node
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    // Assign data to the new node
    new_node->data = new_data;

    // Insert the new node after prev_ref
    new_node->next = prev_ref->next;
    prev_ref->next = new_node;
}


void insertAtEnd(Node** head_ref, int new_data)
{
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    // Assign data to the new node
    new_node->data = new_data;
    new_node->next = NULL;

    // If the linked list is empty, make the new node the head
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    // Traverse to the last node
    Node* temp = *head_ref;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Insert the new node at the end
    temp->next = new_node;

}

void printList(Node* head)
{
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
