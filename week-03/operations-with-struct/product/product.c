//
// Created by oszti on 3/16/2025.
//
#include <stdio.h>
#include "product.h"
#include <stdlib.h>

void readProductDetails(Product_t *pProduct) {
        scanf("\n%[^\n]\n",pProduct->name);
        scanf("%[^\n]\n",pProduct->barcode);
        scanf("%[^\n]",pProduct->supplier);
        scanf("%d %d %d",&pProduct->dateOfManufacture.day,&pProduct->dateOfManufacture.month,&pProduct->dateOfManufacture.year);
        scanf("%d",&pProduct->category);
        scanf("%f",&pProduct->price);
}
char *toString(Date_t date) {
        char *f;
        f = malloc(20 * sizeof(char));
        if(!f) {
                printf("Out of memory");
                exit(1);
        }
        sprintf(f,"%d/%d/%d",date.day,date.month,date.year);
        return f;
}
char *getCategoryText(enum cat category) {
        switch (category) {
                case FRUIT:
                        return "Fruit!";
                case VEGETABLE:
                        return "Vegetable!";
                case DIARY:
                        return "Diary!";
                case OTHER:
                        return "Other";
        }
        return "other";
}

void printProduct(Product_t product) {
                printf("Product name: %s\n", product.name);
                printf("product barcode: %s\n",product.barcode);
                printf("product supplier: %s\n",product.supplier);
                printf("product date of manufacture: %s\n",toString(product.dateOfManufacture));
                printf("product category: %s\n",getCategoryText(product.category));
                printf("product price: %.2f lej\n",product.price);
}