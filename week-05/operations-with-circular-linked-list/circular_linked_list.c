//
// Created by palma on 3/28/2023.
//

#include "circular_linked_list.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


Node *newNode(int new_data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if(!new_node) {
        printf("MEMORY_ALLOCATION_ERROR_MESSAGE");
        exit(-4);
    }
    // insert the data
    new_node->data = new_data;
    new_node->next = NULL;
    return new_node;
}

void insertAtEnd(Node** head_ref, int new_data) {
    Node* new_node = newNode(new_data);
    Node* last = *head_ref; /* used in step 5*/

    if (isEmpty(*head_ref)) {
        *head_ref = new_node;
        new_node->next = *head_ref;
        return;
    }

    while (last->next != *head_ref) last = last->next;
    last->next = new_node;
    new_node->next = *head_ref;
}

void deleteNode(Node** head_ref, int key) {
    if (*head_ref == NULL) return;

    Node *curr = *head_ref, *prev = NULL;

    // Ha az első csomópontot kell törölni
    if (curr->data == key) {
        Node *last = *head_ref;
        while (last->next != *head_ref) {
            last = last->next;
        }

        // Egyetlen elem volt
        if (last == *head_ref) {
            free(*head_ref);
            *head_ref = NULL;
            return;
        }

        last->next = curr->next;
        *head_ref = curr->next;
        free(curr);
        return;
    }

    // Más csomópont törlése
    do {
        prev = curr;
        curr = curr->next;
        if (curr->data == key) {
            prev->next = curr->next;
            free(curr);
            return;
        }
    } while (curr != *head_ref);
}


void printList(Node* node) {
    Node *first = node;
    while (node->next != first) {
        printf("%i ", node->data);
        node = node->next;
    }
    printf("%i\n", node->data);

}

int size(Node* node) {
    int nr = 0;
    Node *first = node;
    while (node->next != first) {
        nr++;
        node = node->next;
    }
    return nr + 1;
}

bool isEmpty(Node *head) {
    return head == NULL;
}


