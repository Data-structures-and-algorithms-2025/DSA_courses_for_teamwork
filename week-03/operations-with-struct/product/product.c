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
        printf("The product's barcode: %s\n", product.barcode);
        printf("The supplie: %s\n", product.supplier);
        printf("The manufacture date: %d %d %d\n",product.dateOfManufacture.year, product.dateOfManufacture.month, product.dateOfManufacture.day);
        printf("The type of the product: %i",product.prodType);
        printf("The price of the product:%.3f",product.price);
}
