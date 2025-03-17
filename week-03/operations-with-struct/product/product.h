//
// Created by oszti on 3/16/2025.
//

#ifndef PRODUCT_H
#define PRODUCT_H
typedef enum category{FRUIT,VEGETABLE,DIARY,OTHER}category_t;
typedef struct Date {
    int year;
    int month;
    int day;
}Date_t;
typedef struct Product{
    char name[31];
    char barcode[11];
    char supplier[51];
    Date_t dateOfManufacture;
    category_t category;
    double price;
}Product_t;
/*Definiálj egy Product_t címkéjű struktúrát, ha a következő információkat tudjuk egy termékről:
•	name (termék neve, max 30 karakter)
•	barcode (termék kódja, max 10 karakter)
•	supplier (forgalmazó, max 50 karakter)
•	dateOfManufacture:
o	termék kiállításának dátuma, egy Date_t típusú elem (Date_t struktúra definiálása – ugyanaz, mint a Student_t esetén)
o	egyszerűbb változat: csak yearOfManufacture
•	category (termék típusa, Enum: FRUIT, VEGETABLE, DIARY, OTHER)
•	price (a termék ára/ db vagy /kg)
Adottak a következő product.h fájlban megadott függvény deklarációk. Implementáld a függvényeket a product.c fájlban.*/

/**
Reads all details of a product, product must be passed by reference
@param pProduct - pointer to a product
*/
void memoryAllocation();
void readProductDetails(Product_t *pProduct);
/**
Prints all details of a product
@param product
*/
void printProduct(Product_t product);

#endif //PRODUCT_H
