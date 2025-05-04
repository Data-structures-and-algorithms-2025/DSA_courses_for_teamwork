//
// Created by oszti on 3/30/2025.
//

#ifndef SIMPLE_LIST_FUNCTIONS_H
#define SIMPLE_LIST_FUNCTIONS_H
#include <stdbool.h>
typedef struct Node{
    int data;
    struct Node* next;
}Node;

/**
 * Allocates memory for a new node
 * @param new_data
 * @return pointer to a new allocated node
 */
Node* newNode(int new_data);

/**
 * Checks if list is empty, head is NULL pointer
 * @param head
 * @return true/false
 */
bool isEmpty(Node *head);

/**
 * Insert new node at the beginning of the list
 * @param head_ref
 * @param new_data
 */
void insertAtBeginning(Node** head_ref, int new_data);

/**
 * Insert new node after a specific node
 * @param prev_ref
 * @param new_data
 */
void insertAfter(Node* prev_ref, int new_data);

/**
 * Insert new node at the end of the list
 * @param head_ref
 * @param new_data
 */
void insertAtEnd(Node** head_ref, int new_data);
/**
 * Prints the elements of the linked list
 * @param head Pointer to the head of the list
 */
void printList(Node* head);

/**
 * Deletes the first node
 * @param head_ref
 */
void deleteFromBeginning(Node** head_ref);

/**
 * Deletes the last node
 * @param head_ref
 */
void deleteFromEnd(Node** head_ref);

/**
 * Deletes a specific node
 * @param head_ref
 * @param key;
 */
void deleteNode(Node** head_ref, int key);

/**
 * Searches for a specific node with value key
 * @param head_ref
 * @param key
 * @return
 */
bool searchNode(Node* head_ref, int key);
/**
 * deallocates memory
 * @param head
 */
void freeList(Node **head);

#endif //SIMPLE_LIST_FUNCTIONS_H
