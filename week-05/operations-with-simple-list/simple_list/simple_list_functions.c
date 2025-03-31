//
// Created by oszti on 3/30/2025.
//

#include "simple_list_functions.h"

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

Node* newNode(int new_data) {
    Node* n = (Node*)calloc(1,sizeof(Node));
    n->data=new_data;
    n->next=NULL;
    return n;
}


bool isEmpty(Node *head) {
    if (head==nullptr){return true;}
    return false;
}


void insertAtBeginning(Node** head_ref, int new_data) {
    Node* newnode=newNode(new_data);
    newnode->next=*head_ref;
    *head_ref=newnode;
}

void insertAfter(Node* prev_ref, int new_data) {
    Node* newnode=newNode(new_data);
    newnode->next=prev_ref->next;
    prev_ref->next=newnode;
}


void insertAtEnd(Node** head_ref, int new_data) {
    Node* x= *head_ref;
    while (x->next!=NULL) {
        x=x->next;
    }
    Node *newnode=newNode(new_data);
    x->next=newnode;
}

void printList(Node* head) {
    while (head->next!=NULL) {
        printf("%d ", head->data);
        head=head->next;
    }
    printf("%d ", head->data);
}