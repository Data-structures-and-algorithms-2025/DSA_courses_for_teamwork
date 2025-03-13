//
// Created by palma on 2/23/2025.
//

#include "algorithms.h"

bool isPrime(int number) {
    bool prim=true;
    if (number < 2){ prim = true;}  // 0 és 1 nem prím
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {prim = false;}  // Ha osztható, nem prím
    }
    return prim;
}
