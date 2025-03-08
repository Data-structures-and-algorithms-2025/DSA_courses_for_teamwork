#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void) {
    /**
     * TODO: read n from console - number of elements
     * TODO: declare an arrays (no dynamic memory allocation needed)
     * TODO: fill the arrays with random values between [1, 10]
     * TODO: print the arrays
     * TODO: calculate and print the number of prime numbers
     */

    //reading n from console
    printf("Please give the number of elements: ");
    int n;
    scanf("%d", &n);

    // declaring the array without dynamic alloc
    int array[n];

    // filling the array with random values
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        array[i] = rand()%10+1;
    }

    //printing the array
    printf("\n");
    for (int i =0; i <n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    // calc and print the nr of primes
    int countPrime = 0;

    for (int i =0; i <n; i++)
    {
        if (array[i]==2) countPrime++;
        else if (array[i]>2)
        {
            bool found = 1;
            for (int j =2; j*j <= array[i]; j++)
            {
                if (array[i]%j==0)
                {
                    found =0;
                    break;
                }

            }
            if (found) countPrime++;

        }
    }
    printf("There are %d prime numbers in the array.", countPrime);

    return 0;
}
