//
// Created by palma on 3/28/2023.
//

#ifndef CIRCULARLINKEDLIST_CIRCULAR_LINKED_LIST_H
#define CIRCULARLINKEDLIST_CIRCULAR_LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



// Create a node
typedef struct Node{
    int data;
    struct Node* next;
}Node;

/**
 * Number of elements in the list
 * @param node
 * @return total number of children
 */
int size(Node* node);

Node* newNode(int new_data);

/**
 * Checks if list is empty, head is NULL pointer
 * @param head
 * @return true/false
 */
bool isEmpty(Node *head);

void insertAtEnd(Node** head_ref, int new_data);

/**
 * Delete a specific node
 * @param head_ref
 * @param key
 */
void deleteNode(Node** head_ref, int key);

void printList(Node* node);


#endif //CIRCULARLINKEDLIST_CIRCULAR_LINKED_LIST_H
