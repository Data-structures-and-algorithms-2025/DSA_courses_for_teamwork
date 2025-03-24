#include <stdio.h>
#include "product/product.h"

int main(void)
{
    /*1.	Hozz létre egy terméket, melynek a deklarálás pillanatában már adj kezdőértékeket. Minden mezőt tölts fel adattal.
    Írd ki a termék adatait a képernyőre (printProduct).
    2.	Hozz létre egy terméket, melynek adatait olvasd be állományból (readProductDetails).
    Írd ki a termék adatait a képernyőre (printProduct).
    */

    Product_t product1={
        "Airpods",
        "45AB21V4",
        "Apple",
        2025,
        OTHER,
        500.99
    };

    printProduct(product1);
    printf("\n");

    Product_t product2;
    if (!freopen("input.txt","r",stdin)) {
        perror("Sikertelen allomanybol valo beolvasas!\n");
        return -1;
    }
    readProductDetails(&product2);
    freopen("CON","r",stdin);
    printProduct(product2);

    return 0;
}