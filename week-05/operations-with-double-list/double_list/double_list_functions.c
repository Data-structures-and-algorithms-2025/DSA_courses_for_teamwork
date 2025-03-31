//
// Created by oszti on 3/30/2025.
//

#include "double_list_functions.h"

#include <stdio.h>
#include <stdlib.h>

Node * newNode(int new_data) {
    Node * new_node = (Node *)malloc(sizeof(Node));
    new_node->data = new_data;
    new_node->next = NULL;
    new_node->prev = NULL;
    return new_node;
}

bool isEmpty(Node *head) {
    return head==NULL;
}

void insertAtBeginning(Node **head_ref, int new_data) {
    Node *newNode1=newNode(new_data);
    newNode1->next=*head_ref;
    newNode1->prev=NULL;
    (*head_ref)->prev=newNode1;
    *head_ref=newNode1;
}

void insertAfter(Node *prev_ref, int new_data) {
    Node *newNode1=newNode(new_data);
    newNode1->next=prev_ref->next;
    newNode1->prev=prev_ref;
    prev_ref->next->prev = newNode1;
    prev_ref->next=newNode1;
}

void insertAtEnd(Node **head_ref, int new_data) {
    if(isEmpty(*head_ref)) {
        insertAtBeginning(head_ref, new_data);
    }
    else {
        Node *newNode1=*head_ref;
        while (newNode1->next!=NULL) {
           newNode1=newNode1->next;
        }
        newNode1->next=newNode(new_data);
        newNode1->next->prev=newNode1;
        newNode1->next->next=NULL;
    }
}

void printListFromBegin(Node *head) {
    while (head!=NULL) {
        printf("%d ", head->data);
        head=head->next;
    }
}

void printListFromEnd(Node *head) {
    while (head->next!=NULL) {
        head=head->next;
    }
    while (head!=NULL) {
        printf("%d ", head->data);
        head=head->prev;
    }
}


