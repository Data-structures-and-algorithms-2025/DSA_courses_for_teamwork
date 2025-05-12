#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "headers/binary_search_tree.h"

int main() {
    srand(time(NULL));
    int min = -100;
    int max = 100;
    Node *root = createNewNode(0);
    for (int i = 1; i < 16; ++i) {
        insert(root, (rand() % (max - min + 1)) + min);
    }
    printf("\nInorder: ");
    inorderTraversal(root);

    destroyBinaryTree(&root);

    return 0;
}
