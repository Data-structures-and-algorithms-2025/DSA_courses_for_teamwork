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

/**
Reads all details of a product, product must be passed by reference
@param pProduct - pointer to a product
*/
//void readProductDetails(Product_t *pProduct);
/**
Prints all details of a product
@param product
*/
//void printProduct(Product_t product);

typedef struct {
  int yearOfManifacture;
} Date_t;

typedef enum {
  FRUIT,
  VEGETABLE,
  DIARY,
  OTHER
} Category_t;

typedef struct {
  char name[31];
  char barcode[11];
  char supplier[51];
  Date_t dateOfManifacture;
  Category_t category;
  double price;
} Product_t;

void readProductDetails(Product_t *pProduct);
void printProduct(Product_t product);

#endif //PRODUCT_H
