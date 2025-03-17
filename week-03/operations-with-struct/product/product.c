//
// Created by oszti on 3/16/2025.
//

#include "product.h"
#include <stdio.h>

void readProductDetails(Product_t *pProduct) {
    fscanf(stdin, " %30[^\n]", pProduct->name);
    fscanf(stdin, " %10s", pProduct->barCode);
    fscanf(stdin, " %50[^\n]", pProduct->supplier);
    fscanf(stdin, "%d %d %d", &pProduct->date.year, &pProduct->date.month, &pProduct->date.day);
    fscanf(stdin, "%d", (int*)&pProduct->category);
    fscanf(stdin, "%f", &pProduct->price);

}