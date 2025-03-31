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

    new_node->next=prev_ref->next;
    if(prev_ref->next != NULL)
    {
        prev_ref->next->prev = new_node;
    }

    prev_ref->next = new_node;
    new_node->prev=prev_ref;
}

void insertAtEnd(Node** head_ref, int new_data)
{
    if(isEmpty(*head_ref))
    {
        *head_ref=newNode(new_data);
        return;
    }

    Node *temp = *head_ref,*last;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    last = newNode(new_data);
    temp->next = last;
    last->prev = temp;
}

void printListFromBegin(Node* head)
{
    Node *temp = head;
    while(temp !=NULL)
    {
        printf("%i ",temp->data);
        temp = temp->next;
    }
    printf("NULL \n");
}

void printListFromEnd(Node *node)
{
    Node* temp = node;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    while(temp != NULL)
    {
        printf("%i ",temp->data);
        temp=temp->prev;
    }
    printf("NULL \n");
}
