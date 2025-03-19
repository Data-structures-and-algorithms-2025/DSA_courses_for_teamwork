#include <stdio.h>
#include "product/product.h"
int main(void)
{
    /*1.	Hozz létre egy terméket, melynek a deklarálás pillanatában már adj kezdőértékeket. Minden mezőt tölts fel adattal.
    Írd ki a termék adatait a képernyőre (printProduct).
    2.	Hozz létre egy terméket, melynek adatait olvasd be állományból (readProductDetails).
    Írd ki a termék adatait a képernyőre (printProduct).
    */
    Product_t product1={"kes","JAZ3D","keseskamerika",2024,7,8,3,5.23};
    printProduct(product1);
    Product_t product2;
    printf("\n");
    readProductDetails(&product2);
    printProduct(product2);

    return 0;
}