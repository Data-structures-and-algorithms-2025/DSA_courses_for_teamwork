#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "hash_table.h"

int main() {
    HashTable table;
    createHashArray(&table);
    display(table);
    srand(time(0));
    int key = 1;
    while(size(table) < CAPACITY)
    {
        key += rand() % CAPACITY + 1;
        insert(&table, key, rand()%100);
        printf("\n\n");
        display(table);
    }
    display(table);
    printf("\nSearch item....\n");
    printf("Given key:");
    scanf("%i", &key);
    if(search(table, key) != -1) {
        printf("The key is present in the hash table\n");
        printf("\nDelete item....\n");
        delete(&table, key);
        display(table);
    }
    else {
        printf("The key is not present in the hash table\n");
    }

    destroyHashArray(&table);
    return 0;
}
