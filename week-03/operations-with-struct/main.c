#include <stdio.h>

#include "product/product.h"

int main(void)
{
    /*1.	Hozz létre egy terméket, melynek a deklarálás pillanatában már adj kezdőértékeket. Minden mezőt tölts fel adattal.
    Írd ki a termék adatait a képernyőre (printProduct).
    2.	Hozz létre egy terméket, melynek adatait olvasd be állományból (readProductDetails).
    Írd ki a termék adatait a képernyőre (printProduct).
    */

    Product_t product1 = {
        "Tej 1L",
        "1234567890",
        "Milka Kft.",
        {2024, 3, 10},
        DIARY,
        399.99
    };

    printf("Elso termek adatai:\n");
    printProduct(product1);

    Product_t product2;
    printf("\nMasodik termek beolvasasa:\n");
    readProductDetails(&product2);

    printf("\nMasodik termek adatai:\n");
    printProduct(product2);

    return 0;
}
