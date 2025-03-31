//
// Created by oszti on 3/30/2025.
//
#include <stdlib.h>
#include <stdio.h>
#include "simple_list_functions.h"

Node* newNode(int new_data){
    Node* new_node = (Node*)malloc(sizeof(Node));
    if(!new_node) {
        printf("ERROR");
        exit(-1);
    }
    new_node->data = new_data;
    new_node->next = NULL;
    return new_node;
}