//
// Created by oszti on 3/16/2025.
//

#include "product.h"
#include <stdio.h>

void readProductDetails(Product_t *pProduct) {
    scanf("%[^\n]\n", pProduct->name);
    scanf("%s\n", pProduct->barCode);
    scanf("%[^\n]\n", pProduct->supplier);
    scanf("%i%i%i\n", &pProduct->dateOfManufacture.year, &pProduct->dateOfManufacture.month, &pProduct->dateOfManufacture.day);
    scanf("%i\n", &pProduct->category);
    scanf("%f\n", &pProduct->price);
}

void printProduct(Product_t product) {
}
