//
// Created by palma on 5/8/2023.
//
#include <stdio.h>
#include "constants.h"
#include <stdlib.h>
#ifndef HASH_STATIC_HASH_TABLE_H
#define HASH_STATIC_HASH_TABLE_H

//ennyi item lehet a hasitotablan
#define CAPACITY 31


//ez az actual item amikbol van tobb a tablan
typedef struct {
    int key;
    int data;
} HashItem;


//ez maga a tabla
typedef struct {
    HashItem *items;
    int size; // kurrens itemek
}HashTable;

//ez arra van, hogyha kitorlok egy itemet
static HashItem dummyData = {-1, 0};


//Ez lenne a deklaracioja az hash functionnak, de mivel azt
// tilos a mainbe hasznalni, nincs itt deklaralva, mert csak a c file hasznalhatja
//This should be only accessible in the .c file
//int hashCode(int key);

//Ez megcsinalja a tablat
void createHashArray(HashTable *pHashTable);


/**
 * Inserts a new data to the hashArray
 * @param hashTable
 * @param key
 * @param data
 */
void insert(HashTable *hashTable, int key, int data);
/**
 * Deletes a data from the array
 * @param hashTable
 * @param key
 * @param data
 */
void delete(HashTable *hashTable, int key);
/**
 * Searches for a specific data with the given key
 * @param hashTable
 * @param key
 * @return the position if it is present, -1 otherwise
 */
int search(HashTable hashTable, int key);
/**
 * Prints the content of the array to the standard input
 * @param hashTable
 */
void display(HashTable hashTable);

/**
 * Returns the number of elements present in the hashtable
 * @param hashTable
 * @return size
 */
int size(HashTable hashTable);
/**
 * Deallocates memory
 * @param pHashTable
 */
void destroyHashArray(HashTable *pHashTable);

#endif //HASH_STATIC_HASH_TABLE_H
