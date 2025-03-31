//
// Created by oszti on 3/30/2025.
//

#include "simple_list_functions.h"

#include <stdio.h>
#include <stdlib.h>

Node *newNode(int new_data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if(!new_node) {
        printf("Error in allocation");
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
new_node->next = (*head_ref);
(*head_ref) = new_node;
}
void insertAfter(Node* prev_node, int new_data) {
    if (prev_node == NULL) {
    printf("THe given pointer is a NULL pointer");
    return;
}
Node* new_node = newNode(new_data);
new_node->next = prev_node->next;
prev_node->next = new_node;
}

void insertAtEnd(Node** head_ref, int new_data) {
Node* new_node = newNode(new_data);
Node* last = *head_ref;
if (isEmpty(*head_ref)) {
*head_ref = new_node;
return;
}
while (last->next != NULL) last = last->next;
last->next = new_node;
}
void printList(Node* node) {
while (node != NULL) {
printf("%4d ", node->data);
node = node->next;
}
}





