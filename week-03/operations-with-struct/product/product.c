#include <stdio.h>
#include "product.h"

//
// Created by oszti on 3/16/2025.
//
void readProductDetails(Product_t *pProduct) {
        scanf("%[^\n]\n", pProduct->name);
        scanf("%s\n",pProduct->barcode);
        scanf("%[^\n]\n", pProduct->supplier);
        scanf("%d%d%d\n", &pProduct->dateOfManufacture.year, &pProduct->dateOfManufacture.month,  &pProduct->dateOfManufacture.day);
        scanf("%i", pProduct->prodType);
        scanf("%f", pProduct->price);
}
void printProduct(Product_t product) {
        printf("The product's name: %s\n", product.name);

}
