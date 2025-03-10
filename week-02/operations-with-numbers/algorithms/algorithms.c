//
// Created by palma on 2/23/2025.
//

#include "algorithms.h"

bool isPrime(int number) {
    if (number<=1) {
        return false;
    }
    for (int i=2; i*i<number; i++) {
        if (number%i==0) {
            return false;
        }
    }
    return true;
}
