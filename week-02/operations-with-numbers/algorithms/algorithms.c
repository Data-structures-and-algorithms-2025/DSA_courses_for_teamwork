//
// Created by palma on 2/23/2025.
//

#include "algorithms.h"

#include <math.h>

bool isPrime(int number) {
    int db=0;
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {db++;}
    }
    if (db == 0) {return true;}
    else {return false;}
}
