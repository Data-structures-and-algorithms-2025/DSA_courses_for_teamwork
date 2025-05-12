#include <stdio.h>
#include "headers/binary_tree.h"

int main() {
    Node *root = createNewNode(10);
    insertLeft(root, 5);
    insertLeft(root->left, 4);
    insertRight(root->left, 6);
    insertRight(root, 15);
    insertLeft(root->right, 13);
    insertRight(root->right, 20);
    insertRight(root->right->right, 18);

    ///traversals
    printf("\nPreorder: ");
    preorderTraversal(root);
    printf("\nInorder: ");
    inorderTraversal(root);
    printf("\nPostorder: ");
    postorderTraversal(root);

    ///deallocate
    destroyBinaryTree(&root);
    return 0;
}
