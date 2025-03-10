//
// Created by palma on 2/23/2025.
//

#include <stdbool.h>
#include <stdio.h>
#include "algorithms.h"

bool isPrime(int number) {
    if (number < 2) {
        return false;
    }
    if (number == 2) {
        return true;
    }
    if (number % 2 == 0) {
        return false;
    }
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}