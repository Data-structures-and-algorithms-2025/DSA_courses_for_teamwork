#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "product/product.h"

int main(void)
{
    /*1.	Hozz létre egy terméket, melynek a deklarálás pillanatában már adj kezdőértékeket. Minden mezőt tölts fel adattal.
    Írd ki a termék adatait a képernyőre (printProduct).
    2.	Hozz létre egy terméket, melynek adatait olvasd be állományból (readProductDetails).
    Írd ki a termék adatait a képernyőre (printProduct).
    */
 Product_t product1={
"Banan",
   "abdk",
      "Nokia",
     2002,12,1,
     0,
     22

 };

printProduct(product1);
    FILE * fin=fopen("allomany.txt","r");
    if (!fin) {
        printf("allomany 404 not found ");
        return -3;
    }
    Product_t product2;
    //readProductDetails(&product2,fin);
    //printProduct(product2);
    return 0;
}
