//
// Created by oszti on 3/16/2025.
//

#include "product.h"
#include <stdio.h>

void readProductDetails(Product_t *pProduct) {
    //printf("Name of the product: ");
    scanf("%30s", pProduct->name);
    //printf("Barcode: ");
    scanf("%10s", pProduct->barcode);
    //printf("Supplier: ");
    scanf("%50s", pProduct->supplier);
    //printf("Date of manufacture: ");
    scanf("%d %d %d", &pProduct->dateOfManufacture.year, &pProduct->dateOfManufacture.month, &pProduct->dateOfManufacture.day);
    //printf("Category(0,1,2,3): ");
    int productCategory;
    scanf("%d", &productCategory);
    pProduct->category = (Product)productCategory;
    //printf("Price: ");
    scanf("%d", &pProduct->price);
}

void printProduct(Product_t product) {
    printf("NAME: %s\n", product.name);
    printf("\tBARCODE: %s\n", product.barcode);
    printf("\tSUPPLIER: %s\n", product.supplier);
    printf("\tDATE OF MANUFACTURE: %d/%d/%d\n", product.dateOfManufacture.year, product.dateOfManufacture.month, product.dateOfManufacture.day);
    printf("\tCATEGORY: ");
    switch (product.category) {
        case FRUIT:     printf("FRUIT\n"); break;
        case VEGETABLE: printf("VEGETABLE\n"); break;
        case DAIRY:     printf("DAIRY\n"); break;
        case OTHER:     printf("OTHER\n"); break;
        default:        printf("UNKNOWN\n"); break;
    }
    printf("PRICE: %d $\n", product.price);

}
