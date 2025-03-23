#include <stdio.h>
#include "product/product.h"

int main(void)
{
    /*1.	Hozz létre egy terméket, melynek a deklarálás pillanatában már adj kezdőértékeket. Minden mezőt tölts fel adattal.
    Írd ki a termék adatait a képernyőre (printProduct).
    2.	Hozz létre egy terméket, melynek adatait olvasd be állományból (readProductDetails).
    Írd ki a termék adatait a képernyőre (printProduct).
    */

    Product_t product1 = { "ALMA","0123456789", "DOKITTAVOLTARTJA", 2025, 3, 23, 0, 2};
    printProduct(product1);
    Product_t product2;
    if (!freopen("input.txt", "r", stdin)) return -1;
    readProductDetails(&product2);
    freopen("CON", "r", stdin);
    printf("\n");
    printProduct(product2);
    return 0;
}