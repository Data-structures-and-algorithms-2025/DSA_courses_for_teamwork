//
// Created by oszti on 3/30/2025.
//
#include <stdlib.h>
#include <stdio.h>
#include "double_list_functions.h"

Node *newNode(int new_data) {
    Node *newItem = (Node*) malloc(sizeof (Node));
    if(!newItem)
    {
        printf("Memory allocation failed");
        exit(404);
    }
    newItem->data = new_data;
    newItem->next = NULL;
    newItem->prev=NULL;
    return newItem;
}

bool isEmpty(Node *head)
{
    return head==NULL;
}

void insertAtBeginning(Node **head_ref, int new_data)
{
    Node *temp= newNode(new_data);
    if(isEmpty(*head_ref))
    {
        *head_ref = temp;
        return;
    }

    temp->next=*head_ref;
    (*head_ref)->prev = temp;
    *head_ref = temp;

}

void insertAfter(Node* prev_ref, int new_data)
{
    if(prev_ref == NULL)
    {
        printf("Error no previous node");
        return;
    }

    Node* new_node=newNode(new_data);

    if(prev_ref->next == NULL)
    {
        new_node->next=prev_ref;
    }
}