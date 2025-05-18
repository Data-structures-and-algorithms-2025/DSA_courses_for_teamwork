#include <stdio.h>
#include "headers/hash_table.h"

int main() {
    HashTable table;
    createHashArray(&table);
    display(table);
    int key, value;
    freopen("input.txt", "r", stdin);
    while(scanf("%i%i", &key, &value) != EOF)
    {
        insert(&table, key, value);
        //printf("\n\n");
        //display(table);
    }
    freopen("CON", "r", stdin);
    display(table);
    printf("\nSearch item....\n");
    printf("Given key:");
    scanf("%i", &key);
    if(search(table, key)) {
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
