//
// Created by oszti on 3/30/2025.
//

#include "simple_list_functions.h"
#include <stdio.h>
#include <stdlib.h>

Node* newNode(int new_data){
       Node* node = (Node*)malloc(sizeof(Node));
    if (node == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    node->data = new_data;
    node->next = NULL;
    return node;
}
bool isEmpty(Node *head){
      return head==NULL;
}
void insertAtBeginning(Node** head_ref, int new_data){
    Node* new_node = newNode(new_data);
    new_node->next = *head_ref;
    *head_ref = new_node;
}
void insertAfter(Node* prev_ref, int new_data){

}