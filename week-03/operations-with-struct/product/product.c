//
// Created by oszti on 3/16/2025.
//

#include "product.h"

#include <stdio.h>
#include <string.h>

void readProductDetails(Product_t *pProduct,FILE *fin) {
    //getchar();
    printf("name:\n");
    fgets(pProduct->name,sizeof(pProduct->name),fin);
    pProduct->name[strcspn(pProduct->name,"\n")]='\0';
    //getchar();
    printf("Barcode: \n");
    fgets(pProduct->barcode,sizeof(pProduct->barcode),fin);
    pProduct->barcode[strcspn(pProduct->barcode,"\n")]='\0';
    //getchar();
    printf("supplier:\n");
    fgets(pProduct->supplier,sizeof(pProduct->supplier),fin);
    pProduct->supplier[strcspn(pProduct->barcode,"\n")]='\0';
   // getchar();
    printf("date: year/month/day\n");
    fscanf(fin,"%d%d%d",&pProduct->dateOfManufacture.year,&pProduct->dateOfManufacture.month,&pProduct->dateOfManufacture.day);
    printf("category: FRUITS/VEGETABLES/DIARY/OTHER\n");
    char category[20];
    if (strcmp(category,"FRUIT")==0) {
        pProduct->category=FRUIT;
    }
    if (strcmp(category,"VEGETABLE")==0) {
        pProduct->category=VEGETABLE;
    }
    if (strcmp(category,"DIARY")==0) {
        pProduct->category=DIARY;
    }
    else {
        pProduct->category=OTHER;
    }
    printf("price:\n");
    fscanf(fin,"%lf",&pProduct->price);
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

