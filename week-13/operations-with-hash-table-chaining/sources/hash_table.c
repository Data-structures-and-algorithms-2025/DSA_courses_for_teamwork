

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "../headers/hash_table.h"

int hashCode(int key) {

    return key%CAPACITY;
}

HashItem createHashItem(int key, int data)
{
    HashItem item={key, data};
    return item;
}
void createHashArray(HashTable *pHashTable) {
       for (int i = 0; i < CAPACITY; ++i) {
        pHashTable->items[i] = NULL;
    }
}

void insert(HashTable *hashTable, int key, int data) {
    int index = hashCode(key);
    printf("%10i\t%10i\t hashcode: %i\n", key, data, index);
    insertFirst(&hashTable->items[index], createHashItem(key, data));
}
void display(HashTable hashTable) {
    for (int i = 0; i < CAPACITY; ++i) {
        if(hashTable.items[i] != NULL)
        {
            printf("Items at position (%i) are: \n", i);
            printList(hashTable.items[i]);
        }
    }
}


void delete(HashTable *hashTable, int key) {
    int index = hashCode(key);
    if (hashTable->items[index] == NULL)
    {
        printf("\n This key does not exist \n");
        return;
    }
    if(deleteNode(&hashTable->items[index], key))
        printf("\n Key (%i) has been removed \n", key);
    else
        printf("\n This key does not exist \n");
}

bool search(HashTable hashTable, int key) {
    int index = hashCode(key);
    if (hashTable.items[index] == NULL)
    {
        return false;
    }
    return searchNode(hashTable.items[index], key);
}

void destroyHashArray(HashTable *pHashTable) {
    for (int i = 0; i < CAPACITY; ++i) {
        freeList(&pHashTable->items[i]);
    }
    pHashTable = NULL;
}