//
// Created by oszti on 3/30/2025.
//

#include "double_list_functions.h"
#include <stdlib.h>

Node* newNode(int new_data){
    Node uj=(*Node)malloc(sizeof(Node));
    if(!uj) {
        perror("malloc baj van");
        exit(1);
    }
    uj->data=new_data;
    uj->next=NULL;
    return uj;
}