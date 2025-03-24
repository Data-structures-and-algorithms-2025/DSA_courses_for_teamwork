//
// Created by oszti on 3/16/2025.
//

#include "product.h"

void readProductDetails(Product_t *pProduct) {
    scanf("%[^\n]\n", pProduct -> name);
    scanf("%[^\n]\n", pProduct -> barcode);
    scanf("%[^\n]\n", pProduct -> supplier);
    scanf("%d\n", &pProduct -> year.yearofmanufacture);
    scanf("%d\n", &pProduct -> category);
    scanf("%f\n", &pProduct -> price);
}

void printProduct(Product_t product) {
    printf("Name: %s\n", product.name);
    printf("Barcode: %s\n", product.barcode);
    printf("Supplier: %s\n", product.supplier);
    printf("Year of manufacture: %d\n", product.year.yearofmanufacture);
    printf("Category: %d\n", product.category);
    printf("Price: %.2f", product.price);
}
//
// char *getCategory(enum Category category) {
//     switch(category) {
//         case FRUIT: return "Fruit";
//         case VEGETABLE: return "Vegetable";
//         case DIARY: return "Diary";
//         default:
//             return "Other";
//     }
// }