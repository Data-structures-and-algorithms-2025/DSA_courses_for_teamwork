//
// Created by palma on 2/23/2025.
//

#include "algorithms.h"

#include <math.h>

bool isPrime(int number) {
    if (number < 2) {return false; }
    for (int i=2; i<=sqrt(number); i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}
