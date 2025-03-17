//
// Created by oszti on 3/16/2025.
//

#include "product.h"
#include <stdio.h>

void readProductDetails(Product_t *pProduct) {
    fscanf(stdin, " %30[^\n]", pProduct->name);
    fscanf(stdin, " %10s", pProduct->barcode);
    fscanf(stdin, " %50[^\n]", pProduct->supplier);
    fscanf(stdin, "%d %d %d", &pProduct->dateOfManufacture.year, &pProduct->dateOfManufacture.month, &pProduct->dateOfManufacture.day);
    fscanf(stdin, "%d", (int*)&pProduct->category);
    fscanf(stdin, "%f", &pProduct->price);

}
void printProduct(Product_t Product) {
    printf("Name: %s \n", Product.name);
    printf("Barcode: %s \n", Product.barcode);
    printf("Supplier: %s \n", Product.supplier);
    printf("Date of manufacture: %d %d %d \n", Product.dateOfManufacture.year, Product.dateOfManufacture.month, Product.dateOfManufacture.day);
    printf("Category: %i ", Product.category);
    printf("\n");
    printf("Price: %.2f \n", Product.price);
}
