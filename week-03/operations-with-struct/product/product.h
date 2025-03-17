//
// Created by oszti on 3/16/2025.
//

#ifndef PRODUCT_H
#define PRODUCT_H
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
typedef struct{
  int yearOfManufacture;
}DATE;

typedef enum{
  FRUIT, VEGETABLE, DIARY, OTHER
}TYPE;

typedef struct {
  char name[30], barcode[10],suplier[50];
  DATE Date_t;
  TYPE type;
  float price;
}Product_t;

/**
Reads all details of a product, product must be passed by reference
@param pProduct - pointer to a product
*/
void readProductDetails(Product_t *pProduct);
/**
Prints all details of a product
@param product
*/
void printProduct(Product_t prod);

#endif //PRODUCT_H
