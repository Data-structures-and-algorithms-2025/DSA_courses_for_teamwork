//
// Created by oszti on 3/16/2025.
//

#include "product.h"
#include <stdio.h>

void readProductDetails(Product_t *pProduct){
    scanf("%^[\n]\n", pProduct->name);
    scanf("%^[\n]\n", pProduct->barcode);
    scanf("%^[\n]\n", pProduct->supplier);
    scanf("%d", &pProduct->yearofManufacture.year);
    scanf("%d", &pProduct->yearofManufacture.month);
    scanf("%d\n", &pProduct->yearofManufacture.day);
    scanf("%d\n", &pProduct->category);
    scanf("%d\n", &pProduct->price);
}

void printProduct(Product_t product){
    printf("Product name: %s\n", product.name);
    printf("Product barcode: %s\n", product.barcode);
    printf("Product supplier: %s\n", product.supplier);
    printf("Date of manufacture: %d - %d - %d\n", product.yearofManufacture.year, product.yearofManufacture.month, product.yearofManufacture.day);
    printf("Category : %d\n", product.category);
    printf("Price: %d\n", product.price);
}

