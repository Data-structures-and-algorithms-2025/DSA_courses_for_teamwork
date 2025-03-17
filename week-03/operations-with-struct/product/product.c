//
// Created by oszti on 3/16/2025.
//

#include "product.h"
#include <stdio.h>

void readProductDetails(Product_t *pProduct) {
    scanf("%s\n", pProduct->name);
    scanf("%s\n", pProduct->barcode);
    scanf("%s\n", pProduct->supplier);
    scanf("%d%d%d\n", &pProduct->dateOfManufacture.year, &pProduct->dateOfManufacture.month, &pProduct->dateOfManufacture.day);
    scanf("%d\n", &pProduct->category);
    scanf("%f\n", &pProduct->price);
}

void printProduct(Product_t product) {
    printf("%s\n", product.name);
    printf("%s\n", product.barcode);
    printf("%s\n", product.supplier);
    printf("%d %d %d\n", product.dateOfManufacture.year, product.dateOfManufacture.month, product.dateOfManufacture.day);
    printf("%d\n", product.category);
    printf("%.2f\n", product.price);
}
