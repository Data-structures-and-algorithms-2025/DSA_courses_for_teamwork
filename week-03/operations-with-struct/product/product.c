//
// Created by oszti on 3/16/2025.
//

#include "product.h"
#include <stdio.h>
#include <stdlib.h>

void readProductDetails(Product_t *pProduct) {
    char bin;
    scanf("%[^\n]", pProduct->name);
    scanf("%c", &bin);
    scanf("%[^\n]", pProduct->barcode);
    scanf("%c", &bin);
    scanf("%[^\n]", pProduct->supplier);
    scanf("%d%d%d", &pProduct->date.year, &pProduct->date.month, &pProduct->date.day);
    scanf("%d", &pProduct->category);
    scanf("%d", &pProduct->price);
}

void printProduct(Product_t product) {
    printf("\n%s", product.name);
    printf("\n%s", product.barcode);
    printf("\n%s", product.supplier);
    printf("\n%d %d %d", product.date.year, product.date.month, product.date.day);
    switch (product.category) {
        case 0:
            printf("\n%s", "FRUIT");
            break;
        case 1:
            printf("\n%s", "VEGETABLE");
            break;
        case 2:
            printf("\n%s", "DIARY");
            break;
        default:
            printf("\n%s", "OTHER");
    }
    printf("\n%d", product.price);
}