#include <stdio.h>

#include "product/product.h"

int main(void)
{
    /*1.	Hozz létre egy terméket, melynek a deklarálás pillanatában már adj kezdőértékeket. Minden mezőt tölts fel adattal.
    Írd ki a termék adatait a képernyőre (printProduct).
    2.	Hozz létre egy terméket, melynek adatait olvasd be állományból (readProductDetails).
    Írd ki a termék adatait a képernyőre (printProduct).
    */
    Product_t prod1={"Mobiltelefon","345712","Samsung",{2025,05,10},OTHER, 700};
    printProduct(prod1);
    Product_t prod2;
    if ( ! freopen("oneProduct.txt", "r", stdin)) {
        printf("ERROR");
        return -2;
    }
    readProductDetails(&prod2);
    printProduct(prod2);

    return 0;
}
