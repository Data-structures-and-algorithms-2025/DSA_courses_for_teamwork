#include <stdio.h>
#include "product/product.h"

int main(void)
{
    /*1.	Hozz létre egy terméket, melynek a deklarálás pillanatában már adj kezdőértékeket. Minden mezőt tölts fel adattal.
    Írd ki a termék adatait a képernyőre (printProduct).
    2.	Hozz létre egy terméket, melynek adatait olvasd be állományból (readProductDetails).
    Írd ki a termék adatait a képernyőre (printProduct).
    */
    Product_t product;
    readProductDetails(&product);
    printProduct(product);
    Product_t productFromFile;
    freopen("input.txt", "r", stdin);
    readProductDetails(&productFromFile);
    printProduct(productFromFile);
    return 0;
}