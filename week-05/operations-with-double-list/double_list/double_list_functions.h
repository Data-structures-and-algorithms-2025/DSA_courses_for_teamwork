//
// Created by oszti on 3/30/2025.
//

#ifndef DOUBLE_LIST_FUNCTIONS_H
#define DOUBLE_LIST_FUNCTIONS_H
typedef struct Node{
    int data;
    struct Node* next, *prev;
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
 * Insertg new node at the end of the list
 * @param head_ref
 * @param new_data
 */
void insertAtEnd(Node** head_ref, int new_data);
/**
 * Prints the elements of the doubly linked list from the beginning (head)
 * @param head Pointer to the head of the list
 */
void printListFromBegin(Node* head);

/**
 * Prints the elements of the doubly linked list from the end (tail)
 * @param head Pointer to the head of the list
 */
void printListFromEnd(Node *head);


#endif //DOUBLE_LIST_FUNCTIONS_H
