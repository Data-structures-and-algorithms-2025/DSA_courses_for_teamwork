//
// Created by oszti on 3/16/2025.
//

#include "product.h"

#include <stdio.h>

void printProduct(Product_t product) {
    printf("%s %s %s %d %d %d %d %.2f",product.name,product.barcode,product.supplier,product.date.year,product.date.month,product.date.day,product.category,product.price);
}

void readProductDetails(Product_t *pProduct) {
    freopen("be.txt","r",stdin);
    scanf("%[^\n]\n",pProduct->name);
    scanf("%[^\n]\n",pProduct->barcode);
    scanf("%[^\n]",pProduct->supplier);
    scanf("%d",&(pProduct->date.year));
    scanf("%d",&(pProduct->date.month));
    scanf("%d",&(pProduct->date.day));
    scanf("%d",&(pProduct->category));
    scanf("%f",&(pProduct->price));
    freopen("CON","r",stdin);
}
