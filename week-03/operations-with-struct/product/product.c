//
// Created by oszti on 3/16/2025.
//

#include "product.h"
#include <stdio.h>

void printProduct(Product_t prod) {
    printf("name:%s barcode: %s suplier:%s\n date of manufacture:%i type:%d",prod.name,prod.barcode,prod.suplier,prod.Date_t.yearOfManufacture,prod.type);
}

void readProductDetails(Product_t *pProduct){
  scanf("%s %s %s %i %i",pProduct->name,pProduct->barcode,pProduct->suplier,pProduct->Date_t.yearOfManufacture,pProduct->type);
 }