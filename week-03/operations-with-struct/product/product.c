//
// Created by oszti on 3/16/2025.
//

#include "product.h"

#include <stdio.h>
#include <string.h>

void readProductDetails(Product_t *pProduct) {
    getchar();
    printf("name:");
    fgets(pProduct->name,sizeof(pProduct->name),stdin);
    pProduct->name[strcspn(pProduct->name,"\n")]='\0';

}

char *getproduct(category_t product) {
    switch (product) {
        case FRUIT: {
            return "fruit";
        }
        case VEGETABLE: {
            return "vegetable";
        }
        case DIARY: {
            return  "diary";
        }
        case OTHER: {
            return "other";
        }
        default: {
            return "helytelen";
        }
    }
}


void printProduct(Product_t product) {
    printf("name:%s\n",product.name);
    printf("barcode:%s\n",product.barcode);
    printf("supplier:%s\n",product.supplier);
    printf("date:%d-%d-%d\n",product.dateOfManufacture.year,product.dateOfManufacture.month,product.dateOfManufacture.day);
    printf("tipus: %s",getproduct(product.category));
    printf("%lf",product.price);
}

