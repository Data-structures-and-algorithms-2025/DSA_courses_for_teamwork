#include <stdio.h>
#include "headers/binary_search_tree.h"

int main() {
    int items[] = {7, 5, 12, 3, 6, 9, 15, 1, 4, 8, 10, 13, 17};
    int n = 13;
    Node *root = createNewNode(items[0]);
    for (int i = 1; i < n; ++i) {
        insert(root, items[i]);
    }
    printf("\nInorder: ");
    inorderTraversal(root);

    deleteNode(root, 17);
    printf("\nInorder: ");
    inorderTraversal(root);

    deleteNode(root, 15);
    printf("\nInorder: ");
    inorderTraversal(root);

    deleteNode(root, 7);
    printf("\nInorder: ");
    inorderTraversal(root);

    destroyBinaryTree(&root);

    return 0;
}
