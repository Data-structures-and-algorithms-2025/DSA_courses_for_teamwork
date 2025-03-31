//
// Created by oszti on 3/30/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include "simple_list_functions.h"
Node* newNode(int new_data){
    Node *newItem = (Node*) malloc(sizeof (Node));
    if(!newItem)
    {
      printf("MEMORY_ALLOCATION_ERROR_MESSAGE");
      exit(-1);
    }
    newItem->data = new_data;
    newItem->next = NULL;
    return newItem;
}
bool isEmpty(Node *head){
  if(head == NULL){
    return 1;
  }
}
void insertAtBeginning(Node** head_ref, int new_data){
  Node* temp = newNode(new_data);
if(isEmpty(*head_ref))
{
*head_ref = temp;
return;
}
temp->next = *head_ref;
(*head_ref)->prev=temp;
*head_ref = temp;
}



