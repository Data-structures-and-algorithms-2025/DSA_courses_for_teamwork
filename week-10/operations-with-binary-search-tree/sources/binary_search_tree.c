//
// Created by palma on 5/5/2023.
//

#include "../headers/binary_search_tree.h"
#include <stdlib.h>
#include <stdio.h>
#include "../headers/constants.h"

Node *createNewNode(int newData) {
    Node *newItem = (Node *) malloc(sizeof(Node));
    if (!newItem) {
        printf(MEMORY_ALLOCATION_ERROR_MESSAGE);
        exit(MEMORY_ALLOCATION_ERROR_CODE);
    }
    newItem->info = newData;
    newItem->left = newItem->right = NULL;
    return newItem;
}

void inorderTraversal(Node *root) {
    if (root == NULL) return;
    inorderTraversal(root->left);
    printf("%d ", root->info);
    inorderTraversal(root->right);
}

void destroyBinaryTree(Node **root) {
    if ((*root) != NULL) {
        destroyBinaryTree(&(*root)->left);
        destroyBinaryTree(&(*root)->right);
        free(*root);
        *root = NULL;
    }
}

Node *insert(Node *node, int key) {
    if(node == NULL)
    {
        return createNewNode(key);
    }
    if(node->info < key)
    {
        node->right = insert(node->right, key);
    }
    else
    {
        node->left = insert(node->left, key);
    }
    return node;
}

Node *minValueNode(Node *node) {
    Node *current = node;
    while(current != NULL && current->left != NULL)
    {
        current = current->left;
    }
    return current;
}

Node *maxValueNode(Node *node) {
    Node *current = node;
    while(current != NULL && current->right != NULL)
    {
        current = current->right;
    }
    return current;
}

Node *deleteNode(Node *root, int key) {
    if(root == NULL)
    {
        return NULL;
    }
    if(root->info < key)
    {
        root->right = deleteNode(root->right, key);
    }
    else if(root->info > key)
    {
        root->left = deleteNode(root->left, key);
    }
    else
    {
        //node to be deleted
        if(root->right == NULL && root->left == NULL)
        {
            free(root);
            return NULL;
        }
        else if(root->right == NULL)
        {
            Node *temp = root->left;
            free(root);
            return temp;
        }
        else if(root->left == NULL)
        {
            Node *temp = root->right;
            free(root);
            return temp;
        }
        //Node *temp = minValueNode(root->right);
        Node *temp = maxValueNode(root->left);
        root->info = temp->info;
        //root->right = deleteNode(root->right, temp->info);
        root->left = deleteNode(root->left, temp->info);
    }
    return root;

}
