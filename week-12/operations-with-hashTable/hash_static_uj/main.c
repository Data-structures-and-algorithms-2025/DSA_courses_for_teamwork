#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "hash_table.h"

int main() {

    //keszit egy (eleinte ures) hasitotablat
    HashTable table;
    createHashArray(&table);
    display(table);


    //random kulcsokat general es utana kiirja a tablat
    srand(time(0));
    int key = 1;
    while(size(table) < CAPACITY)
    {
        key += rand() % CAPACITY + 1;
        insert(&table, key, rand()%100);
        printf("\n\n");
        display(table);
    }

    // bekeri a keresett kulcsot
    display(table);
    printf("\nSearch item....\n");
    printf("Given key:");
    scanf("%i", &key);

    // megkeresi a beirt kulcsot, ha megtalalja akkor kitorlni, ha nem
    // kiirja, hogy nincs. utana kiirja az igy kapott tablat
    if(search(table, key) != -1) {
        printf("The key is present in the hash table\n");
        printf("\nDelete item....\n");
        delete(&table, key);
        display(table);
    }
    else {
        printf("The key is not present in the hash table\n");
    }

    //torli a tablat
    destroyHashArray(&table);
    return 0;
}
