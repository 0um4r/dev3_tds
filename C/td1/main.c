#include <stdio.h>
#include "mathesi.h"

int main()
{
    //printf(isPrime(8) ? "true" : "false");

    //######### Ex 1.2 #########
    printf("Les nombres premiers entre 200 et 349 :\n");
    unsigned newLine = 0;
    for(unsigned i = 200; i <= 349; i++) {
        if(newLine == 10) {
            printf("\n");
            newLine = 0;
        }
        isPrime(i) ? printf("%d", i) : printf(" . ");
        newLine++;
    }

    printf("\n");

    printPrimeFactor(126, true);
}
