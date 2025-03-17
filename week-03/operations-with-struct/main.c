#include <stdio.h>
#include "product\product.h"

int main(void)
{
    /*1.	Hozz létre egy terméket, melynek a deklarálás pillanatában már adj kezdőértékeket. Minden mezőt tölts fel adattal.
    Írd ki a termék adatait a képernyőre (printProduct).
    2.	Hozz létre egy terméket, melynek adatait olvasd be állományból (readProductDetails).
    Írd ki a termék adatait a képernyőre (printProduct).
    */
    Product_t product1 = {"toltottkaposzta","ASD376A","NOKIA",2013,3,3,1,54};
    printProduct(product1);
    Product_t product2;

    readProductDetails(&product2);
    printProduct(product2);
    return 0;
}