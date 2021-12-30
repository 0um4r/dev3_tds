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
    printf("\n");


    //######### Ex 1.5 #########
    unsigned a = 423;
    unsigned b = 135;
    unsigned cpt = 0;
    for(unsigned i = 0; i < 18; i++) {
        if(cpt == 3) {
            a += 3;
            b = 135;
            cpt = 0;
            printf("\n");
        }
        cpt < 2 ? printf(" gcd(%u, %u) = %2u |", a, b, gcd(a,b)) : printf(" gcd(%u, %u) = %u ", a, b, gcd(a,b));
        b -= 5;
        cpt++;
    }
}
