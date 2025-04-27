//
// Created by palma on 5/5/2023.
//

#ifndef BINARYTREE_BINARY_TREE_H
#define BINARYTREE_BINARY_TREE_H




typedef struct Node{
    int info;
    struct Node *left, *right;
}Node;

/**
 * Allocate memory for a new node
 * @param newData
 * @return the allocated node item
 */
Node *createNewNode(int newData);
/**
 * Insert a new node to the left of the root
 * @param root
 * @param newData
 * @return pointer to the inserted node
 */
Node *insertLeft(Node *root, int newData);
/**
 * Insert a new node to the right of the root
 * @param root
 * @param newData
 * @return pointer to the inserted node
 */
Node *insertRight(Node *root, int newData);
/**
 * ROOT-LEFT-RIGHT order of traversal
 * @param root
 */
 ///1, 2, 4, 8, 9, 5, 3, 6, 7
void preorderTraversal(Node *root);
/**
 * LEFT-ROOT-RIGHT order of traversal
 * @param root
 */
 ///8, 4, 9, 2, 5, 1, 6, 3, 7
void inorderTraversal(Node *root);
/**
 * LEFT-RIGHT-ROOT order of traversal
 * @param root
 */
 ///8, 9, 4, 5, 2, 6, 7, 3, 1
void postorderTraversal(Node *root);

/**
 * Deallocate memory
 * @param root
 */
void destroyBinaryTree(Node **root);

#endif //BINARYTREE_BINARY_TREE_H
